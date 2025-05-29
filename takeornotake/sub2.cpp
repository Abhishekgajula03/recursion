#include<bits/stdc++.h>
using namespace std;

void f(int index,int n,vector<int>&arr,vector<int>&ans,vector<vector<int>>&temp){ 
    if(index>=n){ 
       for(auto it:ans){cout<<it;}
       cout<<endl;
       return;
    }
    ans.push_back(arr[index]);
    f(index+1,n,arr,ans,temp);
    ans.pop_back();
    f(index+1,n,arr,ans,temp);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr={3,1,2};
    vector<int>ans;
    vector<vector<int>>temp;
    f(0,n,arr,ans,temp);
    for(auto a:temp){ 
        for(auto it:a){ 
            cout<<it<<" ";
        }
        cout<<endl;
    }
    
}
