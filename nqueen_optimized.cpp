class Solution {
public:

    void solve(int col,vector<vector<string>>&ans,vector<string>&board, vector<int>&left,vector<int>&updiagonal,vector<int>&lowerdiagonal,int n){
        if(col==n){ans.push_back(board);
        return;}
        for(int row=0;row<n;row++){
            if(left[row]==0 && updiagonal[row+col]==0 && lowerdiagonal[n-1+col-row]==0){
                board[row][col]='Q';
                left[row]=1;
                updiagonal[row+col]=1;
                lowerdiagonal[n-1+col-row]=1;
                solve(col+1,ans,board,left,updiagonal,lowerdiagonal,n);
                board[row][col]='.';
                left[row]=0;
                updiagonal[row+col]=0;
                lowerdiagonal[n-1+col-row]=0;
            }
        }


    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;

        }
        vector<int>left(n,0),updiagonal(2*n-1,0),lowerdiagonal(2*n-1,0);
        solve(0,ans,board,left,updiagonal,lowerdiagonal,n);
        return ans;
    }
};
