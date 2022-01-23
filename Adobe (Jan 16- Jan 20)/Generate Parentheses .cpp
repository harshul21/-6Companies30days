//Problem Link:-https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1/#
class Solution
{
    public:
    void helper(vector<string> &ans,int open,int close,string &temp){
        if(open==0 and close==0){
            ans.push_back(temp);
            return;
        }
        if(open!=0){
            string op1=temp+'(';
            helper(ans,open-1,close,op1);
        }
        if(close>open){
            string op2=temp+')';
            helper(ans,open,close-1,op2);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here
        int open=n;
        int close=n;
        vector<string> ans;
        string temp="";
        helper(ans,open,close,temp);
        return ans;
    }
};
