//Problem Link:-https://practice.geeksforgeeks.org/problems/implement-atoi/1/#
class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int n=str.length();
        int ans=0;int check=0;
        if(str[0]=='-'){
            check=1;
        }
        else{
            ans=ans*10+(str[0]-'0');
        }
        if(n==1 and check==0){
            return ans;
        }
        if(n==1 and check==1){
            return -1;
        }
        for(int i=1;i<str.length();i++){
            if(str[i]>='0' and str[i]<='9'){
                ans=ans*10+(str[i]-'0');
            }
            else{
                return -1;
            }
        }
        if(check==1){
            return 0-ans;
        }
        return ans;
    }
};
