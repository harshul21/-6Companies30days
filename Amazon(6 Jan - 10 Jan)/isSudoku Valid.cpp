//Problem Link:-https://practice.geeksforgeeks.org/problems/is-sudoku-valid4820/1/#
class Solution{
public:
    int isValid(vector<vector<int>> board){
        // code here
        int used1[9][9]={0};
        int used2[9][9]={0};
        int used3[9][9]={0};
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]!=0)
                {
                    int nums=board[i][j]-1;
                    int k=i/3*3 + j/3;
                    if(used1[i][nums] or used2[j][nums] or used3[k][nums])
                    {
                        return 0;
                    }
                    used1[i][nums]=used2[j][nums]=used3[k][nums]=1;                             
                }
            }
        }
        return 1;
    }
    
};
