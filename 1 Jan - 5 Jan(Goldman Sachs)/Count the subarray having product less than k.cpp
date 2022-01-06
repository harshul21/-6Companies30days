//Problem link-https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        // int count=0;
        // dfs(a,n,k,count,1,0);
        // return count;
        long long start=0,end=0,count=0,prod=1;
        while(end<n)
        {
            prod*=a[end];
            while(start<n and prod>=k){
                prod=prod/a[start];
                start++;
            }
            if(prod<k){
                count+=end-start+1;
            }
            end++;
        }
        return count;
    }
};
