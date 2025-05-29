#include<bits/stdc++.h>
using namespace std;
void f(int index,int n,int target,vector<int>&arr,vector<int>&ans){ 
    if(index==n){ 
    if(target==0){
        for(auto it:ans){cout<<it<<" ";}
        cout<<endl;
    }
    return;
    }
    if(index<=target){
    ans.push_back(arr[index]);
    f(index,n,target-arr[index],arr,ans);
    ans.pop_back();
    
    }f(index+1,n,target,arr,ans);
}

int main(){ 
    int target=2;
    vector<int>arr={1,2,1};
    vector<int>ans;
    int index=0;
    int n=3;
    f(index,n,target,arr,ans);
    
}
