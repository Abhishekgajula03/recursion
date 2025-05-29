#include<bits/stdc++.h>
using namespace std;
void f(int index,vector<int>&arr,vector<int>&ans,vector<vector<int>>&temp,int n){ 
    if(index>=n){temp.push_back(ans);
        return ;
    }
    ans.push_back(arr[index]);
    f(index+1,arr,ans,temp,n);
    ans.pop_back();
    f(index+1,arr,ans,temp,n);
    
}
int main(){ 
    int n;
    cin>>n;
  vector<int>arr={3,1,2};  
  vector<int>ans;
  vector<vector<int>>temp;

 f(0,arr,ans,temp,n);
  for(auto a:temp){
      for(auto it:a){
          cout<<it<<" ";
      }
      cout<<endl;
  }  
}
