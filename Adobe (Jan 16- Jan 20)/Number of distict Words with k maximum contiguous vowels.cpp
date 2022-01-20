//Problem Link:- https://practice.geeksforgeeks.org/problems/7b9d245852bd8caf8a27d6d3961429f0a2b245f1/1/#
class Solution
{
  public:
    long long dp[1001][1001], MOD = 1000000007;
    
    int kvowelwords(int n,int k){
        // code here
        for(int i =0;i <=n;i++){
            
            for(int j = 0;j <= k;j++){
                if(i == 0){
                    dp[i][j] = 1;
                }else{
                    dp[i][j] = dp[i-1][k]*21%MOD;
                    
                    if(j > 0){
                        dp[i][j] = (dp[i][j] + dp[i-1][j-1]*5%MOD) % MOD;
                    }
                }
                
            }
        
        }
            return (int)dp[n][k];
    }
};
