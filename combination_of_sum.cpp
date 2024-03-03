#include<bits/stdc++.h>
using namespace std;

void sam(int index,vector<int>&ans,int arr[],int sum,int s,int n){
    if(index==n){
        if(s==sum){
            for(auto it:ans){cout<<it;}
            cout<<endl;
            }
        return;
    }
    ans.push_back(arr[index]);
    s+=arr[index];
    sam(index+1,ans,arr,sum,s,n);
    s-=arr[index];
    ans.pop_back();
    sam(index+1,ans,arr,sum,s,n);
}
