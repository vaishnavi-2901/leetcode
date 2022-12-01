/*
Given two sparse vectors, compute their dot product.

Implement class SparseVector:

SparseVector(nums) Initializes the object with the vector nums
dotProduct(vec) Compute the dot product between the instance of SparseVector and vec
A sparse vector is a vector that has mostly zero values, 
you should store the sparse vector efficiently and compute the dot product between two SparseVector.
*/


class SparseVector {
public:
    vector<int> temp;
    SparseVector(vector<int> &nums) {
        this->temp = nums;
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int ans = 0;
        for(int i=0;i<vec.temp.size();i++){
            ans += (temp[i]*vec.temp[i]);
        }
        return ans;
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);
