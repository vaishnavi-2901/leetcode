/*
Given a number N. Find the minimum number of operations required to reach N starting from 0. You have 2 operations available:

Double the number
Add one to the number

*/




  int dp[n+1];
        for(int i=0;i<n+1;i++)
        dp[i] = 0;
        
        dp[1] = 1;
        
        for(int i = 2;i<n+1;i++)
        {
            if(i%2==0)
            dp[i] = min(dp[i-1],dp[i/2]) +1;
            else
            dp[i] = dp[i-1] +1;
        }
        
        return dp[n];
