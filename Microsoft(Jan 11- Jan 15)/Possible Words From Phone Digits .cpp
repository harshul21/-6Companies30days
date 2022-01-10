Problem Link:-https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/
class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void dfs(int idx,int a[],int N,vector<string> phone,vector<string> &ans,string &ds){
        if(ds.size()==N){
            ans.push_back(ds);
            return;
        }
        string ch=phone[a[idx]];
        for(int i=0;i<ch.length();i++){
            ds.push_back(ch[i]);
            dfs(idx+1,a,N,phone,ans,ds);
            ds.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> phone={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string ds="" ;
        dfs(0,a,N,phone,ans,ds);
        return ans;
    }
};
