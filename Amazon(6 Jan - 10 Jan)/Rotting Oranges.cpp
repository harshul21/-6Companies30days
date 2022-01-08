//Problem Link:- https://leetcode.com/problems/rotting-oranges/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]>=1){
                    count++;
                }
            }
        }
        int time=0;
        while(!q.empty()){
            time++;
            int s=q.size();
            int dr[4]={-1,1,0,0};
            int dc[4]={0,0,-1,1};
            for(int i=0;i<s;i++){
                count--;
                int row=q.front().first;
                int col=q.front().second;
                q.pop();

                for(int k=0;k<4;k++){
                    int r1=row+dr[k];
                    int c1=col+dc[k];
                    if(r1<=grid.size() and c1<grid[0].size() and r1>=0 and c1>=0 and grid[r1][c1]==1){
                        q.push({r1,c1});
                        grid[r1][c1]=2;
                    }
                }
            }
        }
        if(count==0){
            return max(0,time-1);
        }
        return -1;
    }
};
