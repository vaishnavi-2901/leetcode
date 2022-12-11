class Solution{
		

	public:
	int maxSumIS(int a[], int n)  
	{  
	    // Your code goes here
	    int dp[n+1]={0};
	   // dp[0] = a[0];
	    int sum = 0;
	    int max_sum = INT_MIN;
	    for(int i=0;i<n;i++){
	        dp[i]=a[i]; //putting the original value to calculate the max sum
	        for(int j=0;j<i;j++){
	            if(a[i]>a[j]){
	                dp[i] = max(dp[j]+a[i], dp[i]); //comparing if the sequence has maximum sum
	               // cout<<dp[i]<<" ";
	            }
	        }
	    }
	    int ans = INT_MIN;
	    for(int i=0;i<=n;i++) ans = max(ans,dp[i]);
	    return ans;
	}  
