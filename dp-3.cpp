/*
Given an infinite supply of each denomination of Indian currency { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 } and a target value N.
Find the minimum number of coins and/or notes needed to make the change for Rs N. You must return the list containing the value of coins required. 


Example 1:

Input: N = 43
Output: 20 20 2 1
Explaination: 
Minimum number of coins and notes needed 
to make 43. 

*/



class Solution{
public:
    int bsearch(vector<int> dp, int &val){
        int l=0;
        int h=dp.size()-1;
        while(l<h){
            int m = (l+h)/2;
            if(dp[m]==val) return dp[m];
            else if(dp[m]>val) h=m-1;
            else l=m+1;
        }
        if (dp[l]>val) return dp[l-1];
        return dp[l]; //getting the closest value from coins array
    }
    vector<int> minPartition(int N)
    {
        // code here
        // int dp[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        vector<int> dp({1, 2, 5, 10, 20, 50, 100, 200, 500, 2000});
        vector<int> res;
        while(N>0){        
            int val = bsearch(dp, N);
            res.push_back(val);
            N-=val;
        }
        return res;
    }
};
