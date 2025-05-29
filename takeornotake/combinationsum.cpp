#include<bits/stdc++.h>
using namespace std;

void f(int index,int n,int target,vector<int>&arr,vector<int>&ans,int sum){ 
    
    if(index==n){ 
        if(target==sum){ 
            for(auto it:ans){ 
                cout<<it<<" ";
            }
        cout<<endl;
        
        }return;
    }
    
    ans.push_back(arr[index]);
    sum+=arr[index];
    f(index+1,n,target,arr,ans,sum);
   sum-=arr[index];
   ans.pop_back();
   
    f(index+1,n,target,arr,ans,sum);
}
int main(){ 
    int index=0;
    int target=2;
    vector<int>arr={1,2,1};
    vector<int>ans;
    int n=3;
    f(index,n,target,arr,ans,0);
}
