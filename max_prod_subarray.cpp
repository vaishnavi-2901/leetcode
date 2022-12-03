class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int p1 = nums[0]; //taking first value for tracking max so far
       int p2 = nums[0]; //tracking first value for min so far
       int res = nums[0]; // store result
       for(int i=1;i<nums.size();i++){
           int temp = max({nums[i], p1*nums[i], p2*nums[i]}); //max so far
           p2 = min({nums[i], p1*nums[i], p2*nums[i]}); //min so far
           p1 = temp; //update max product
           res = max(res, p1); // max result
       }
       return res;
    }
};
