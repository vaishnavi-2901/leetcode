class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        // suppose array is [1,2,3,4]
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]); //creating the circular array [1,2,3,4,1,2,3,4]
        }
        for(int i=0;i<n;i++){
            int t = nums[i+n]; // to do inplace, pull numbers from the array (from nth to n+nth index) <-- it will present the original array
            nums[i] = nums[t+n]; // change in the first part only
        }
        nums.erase(nums.begin()+n,nums.end()); //erase the duplicate array from nth to n+nth index
        return nums;
    }
};
