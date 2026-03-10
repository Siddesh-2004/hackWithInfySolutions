#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int findMaxIndex(vector<int> v){
    int index=-1,max=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max=v[i];
            index=i;
        }
    }
    return index;
}
int main(){
    int n,m,ele,points=0,index=0;
    cin>>n;
    cin>>m;
    vector<int> v,d;
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<n;i++){
        cin>>ele;
        d.push_back(ele);
    }
    for(int i=0;i<m;i++){
        index=findMaxIndex(v);
        points+=v[index];
        v[index]=v[index]-d[index];
    }
    cout<<points;
}