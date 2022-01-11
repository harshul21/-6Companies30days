Problem Link:-https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/#
void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    for(auto &it:matrix){
        reverse(it.begin(),it.end());
    }
    for(int i=0;i<matrix.size();i++){
        for(int j=i+1;j<matrix[0].size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
