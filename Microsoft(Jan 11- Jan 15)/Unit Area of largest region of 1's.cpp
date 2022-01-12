//Problem Link:- https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/#
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void dfs(int i,int j,vector<vector<int>> &grid,int n,int m,int &count){
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==0){
            return;
        }
        count++;
        grid[i][j]=0;
        dfs(i+1,j,grid,n,m,count);
        dfs(i-1,j,grid,n,m,count);
        dfs(i,j+1,grid,n,m,count);
        dfs(i,j-1,grid,n,m,count);
        dfs(i+1,j+1,grid,n,m,count);
        dfs(i+1,j-1,grid,n,m,count);
        dfs(i-1,j-1,grid,n,m,count);
        dfs(i-1,j+1,grid,n,m,count);
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                if(grid[i][j]==1){
                    dfs(i,j,grid,n,m,count);
                    mx=max(mx,count);
                }
            }
        }
        return mx;
    }
};
