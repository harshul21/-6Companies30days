//Problem Link-https://practice.geeksforgeeks.org/problems/decode-the-string2444/1
class Solution{
    string decodeString(string &s,int &i){
        string res;
        while(i<s.length() and s[i]!=']'){
            if(isdigit(s[i])){
                int k=0;
                while(i<s.length() and isdigit(s[i])){
                    k=k*10+s[i++]-'0';
                }
                i++;
                string r=decodeString(s,i);
                while(k-->0){
                    res+=r;
                }
                i++;
            }
            else{
                res+=s[i++];
            }
        }
        return res;
    }
public:
    string decodedString(string s){
        // code here
        int i=0;
        return decodeString(s,i);
    }
};
