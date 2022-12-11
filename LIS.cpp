class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n+1]; 
       for(int i=0;i<=n;i++) dp[i]=1;
       for(int i=1;i<n;i++){
           for(int j=0;j<i;j++){
               if(a[i]>a[j]) dp[i] = max(1+dp[j], dp[i]);
           }
       }
       int ans = INT_MIN;
       for(int i=0;i<=n;i++) ans=max(ans, dp[i]);
       return ans;
    }
};
