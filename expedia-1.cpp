Given an array of positive numbers and a positive number ‘Sum’, find the length of the smallest contiguous subarray whose sum is equal to ‘Sum’. Return 0, if no such subarray exists.

              l  r
        0  1  2  3  4  5
Input: [2, 1, 5, 2, 7, 2], Sum=7 
              2  0 
Output: 2 

int n=arr.size();
int l=0,r=0;
int k=0;
while(r<n){
    if(l==r) k=arr[r];
    else k = arr[l];
    int temp = sum-k;
    while(temp>0){
        if(temp==0) return r-l+1;
        r++;
    }
    if(temp<0) l++;
}











Given a sorted array, and its rotated at a point(pivot), find a given number in that array.
6, 7 ,8 , 1 , 2, 3 ,5 
   
Val : 7
O/p : 1


Val : 9 
O/p : -1



//brute force
o(n) --> traverse whole array

5,4,3,1,2

//binary search 
    step1-> what is pivot element? 
    
    n = arr.size();
    //6, 7 ,8 , 1 , 2, 3 ,5 
    int left = 0 , right = n-1;
    
    int findpivot(vector<int> arr,left, right){
    int mid = (left+right)/2;
    if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
    //6, 7 ,8 , 9 , 1, 2, 3 ,5 
    else if(arr[mid]>arr[mid-1] &&arr[mid]>arr[mid+1])
        findpivot(arr,mid+1,right);
    else
        findpivot(arr,left,mid-1);
    }
    
    
    int main(){
        int n;
        vector<int> arr;
        cin>>n;
        for(int i=0;i<n;i++) //input taken
        if(n==0) return -1;
        int pivot= findpivot(arr,0,n-1);
        int left =0;
        int right = n-1;
        if(arr[pivot]==val) return pivot;
        else if(arr[pivot-1] > val) {
        right = pivot-1;
        }
        else left = pivot+1;
        res = -1;
        while(left<=right){
            int mid = (left+right)/2;
            if(arr[mid]==val) {//return mid; res = mid cout<<res<<endl; break;}
            else if(arr[mid]>val) right = mid+1;
            else left = mid-1;
        }
        cout<<res<<endl;
    }
    
