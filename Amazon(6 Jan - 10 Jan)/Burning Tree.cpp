//Problem Link:-https://practice.geeksforgeeks.org/problems/burning-tree/1/#
class Solution {
  public:
  	int func(Node* root,map<Node*,Node*> mp,Node* res){
  		queue<Node*> q;
  		q.push(res);
  		map<Node*,int> vis;
  		int time=0;
  		vis[res]=1;
  		while(!q.empty()){
  			int s=q.size();
  			int fl=0;
  			for(int i=0;i<s;i++){
  				Node* curr=q.front();
  				q.pop();
  				if(curr->left and !vis[curr->left]){
  					fl=1;
  					vis[curr->left]=1;
  					q.push(curr->left);
  				}
  				if(curr->right and !vis[curr->right]){
  					fl=1;
  					vis[curr->right]=1;
  					q.push(curr->right);
  				}
  				if(mp[curr] and !vis[mp[curr]]){
  					fl=1;
  					vis[mp[curr]]=1;
  					q.push(mp[curr]);
  				}
  			}
  			if(fl){
  				time++;
  			}
  		}
  		return time;
  	}
  	Node* treetomap(Node* root,int target,map<Node*,Node*>&mp){
  		queue<Node*> q;
  		q.push(root);
  		Node* res;
  		while(!q.empty()){
  			Node* curr=q.front();
  			q.pop();
  			if(curr->data==target){
  				res=curr;
  			}
  			if(curr->left){
  				mp[curr->left]=curr;
  				q.push(curr->left);
  			}
  			if(curr->right){
  				mp[curr->right]=curr;
  				q.push(curr->right);
  			}
  		}
  		return res;
  	}
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node*,Node*> mp;
        Node* res=treetomap(root,target,mp);
        int time=func(root,mp,res);
        return time;
    }
};
