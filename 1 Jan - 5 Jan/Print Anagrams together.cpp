//Problem Link - https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#
//Solution
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
       map<string,vector<string>> mp;
       for(auto it:string_list)
       {
           string st=it;
           sort(it.begin(),it.end());
           mp[it].push_back(st);
       }
       vector<vector<string>> ans;
       for(auto it:mp){
           ans.push_back(it.second);
       }
       return ans;
    }
};
