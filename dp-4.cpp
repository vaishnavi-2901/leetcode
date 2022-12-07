class Solution{
    public:
    // int count=0;
    // int lcs(string s1, string s2, int i, int j, int ans){
    //     if(i==0||j==0) return ans;
    //     if(s1[i-1]==s2[j-1]) ans = lcs(s1,s2,i-1,j-1,ans+1);
    //     ans = max(ans, max(lcs(s1,s2,i-1,j,0),lcs(s1,s2,i,j-1,0)));
    //     return ans;
    // }
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        // return lcs(s1,s2,n,m,0);
        
       int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
     
        int ans=INT_MIN;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                   
                }
                else dp[i][j]=0;
                 ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};
