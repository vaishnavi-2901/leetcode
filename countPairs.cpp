class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        int ans = 0; 
        while(i<j){
            int sum = nums[i] + nums[j];
            if(sum<target){
                ans+= (j-i);
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};


/*
here, we can have two ways to do it.
1. using hashmap
2. using two pointer approach after sorting

We'll cover two pointer approach here.

- assign start and end variable 
- sort the array
- we will compare sum of both start and end elements with target
- if sum comes out to be less than the target (which is condition), so if we got the sum less than taget then all the elements on the left side would also do the same
- so, we will update our ans like ans += (end-start) --> it will give us ways 
*/
