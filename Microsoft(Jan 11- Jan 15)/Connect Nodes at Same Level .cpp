Problem Link:-https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/#
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       if(root==NULL){
           return;
       }
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           int size=q.size();
           for(int i=1;i<=size;i++){
               Node* curr=q.front();
               q.pop();
               if(i!=size){
                   curr->nextRight=q.front();
               }
               if(curr->left);
               {
                   q.push(curr->left);
               }
               if(curr->right){
                   q.push(curr->right);
               }
           }
       }
    }    
      
};
