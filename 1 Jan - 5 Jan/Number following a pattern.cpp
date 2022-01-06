//Problem Link - https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        stack<int> st;
        int num=1;
        string ans;
        for(int i=0;i<S.length();i++)
        {
            char ch=S[i];
            if(ch=='D'){
                st.push(num);
                num++;
            }
            else{
                st.push(num);
                num++;
                
                while(st.size()>0){
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while(st.size()>0){
            ans+=to_string(st.top());
            st.pop();
        }
        return ans;
    }
};
