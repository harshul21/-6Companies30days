//Problem Link:- https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/
//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
//Function to count number of subtrees having sum equal to given sum.
int dfs(Node* root,int X,int &ans){
    if(root==NULL){
        return 0;
    }
    int left =dfs(root->left,X,ans);
    int right=dfs(root->right,X,ans);
    
    int sum=left+right+root->data;
    if(sum==X){
        ans++;
    }
    return sum;
}
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int ans=0;
	dfs(root,X,ans);
	return ans;
}
