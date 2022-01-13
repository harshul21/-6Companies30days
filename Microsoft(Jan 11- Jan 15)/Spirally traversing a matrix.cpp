//Problem Link:-https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/#
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
    vector<int> ans;
    int row1=0;
    int col1=0;
    int row2=r-1;
    int col2=c-1;
    while(row1<=row2 && col1<=col2){
        for(int i=col1;i<=col2;i++){
            ans.push_back(matrix[row1][i]);
         
        }
        row1++;
        
        if(row1>row2 or col1>col2){
            break;
        }
        
        for(int i=row1;i<=row2;i++){
            ans.push_back(matrix[i][col2]);
        }
        col2--;
        
        if(row1>row2 or col1>col2){
            break;
        }
        
        for(int i=col2;i>=col1;i--){
            ans.push_back(matrix[row2][i]);
       
        }
        row2--;
        
        if(row1>row2 or col1>col2){
            break;
        }
        
        for(int i=row2;i>=row1;i--){
            ans.push_back(matrix[i][col1]);
            
        }
        col1++;
        
        if(row1>row2 or col1>col2){
            break;
        }
    }
    return ans;
    }
};
