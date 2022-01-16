//Problem Link: -https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        ans.push_back(a[n-1]);
        if(n==1){
            return ans;
        }
        int mx=a[n-1];
        for(int i=n-2;i>=0;i--){
            if(a[i]>=mx){
                ans.push_back(a[i]);
                mx=a[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
