//Problem Statement:- https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#
string encode(string src)
{     
    string str="";
    int i=0;
    int j=1;
    int count=1;
    int n=src.length();
    if(src.length()==1){
        str+=src[0]+to_string(count);
        return str;
        // return src[0]+"1";
    }
    while(j<n)
    {
        if(src[i]==src[j])
        {
            count++;
            j++;
        }
        if(src[i]!=src[j])
        {
            str+=src[i]+to_string(count);
            count=0;
            i=j;
        }
        // if(j==n-1){
        //     str+=src[i]+to_string(count);
        // }
    }
    return str;
}     
 
