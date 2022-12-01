class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){ // here i was doing one mistake that is i was iterating from 0 to nums.size(), since i am pushing elements in the same array
          // and in each iteration, it is calculating the nums.size() which is increasing everytime, that was throwing TLE
            int t = nums[i];
            cout<<t<<" ";
            nums.push_back(t);
        }
        return nums;
    }
};
