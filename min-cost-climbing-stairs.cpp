class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // size of cost array
        int n = cost.size();
        // define dynamic array to store costs and calculate efficiently
        vector<int>dp(n);
        // store first two values as we can take upto 2 steps at a time
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2; i<n; i++)
        {
            // determine what step to take based on cost + next cost for which you are at
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);
    }
};
