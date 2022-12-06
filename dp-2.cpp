/*
You are given N pairs of numbers. In every pair, the first number is always smaller than the second number. A pair (c, d) can follow another pair (a, b) if b < c. Chain of pairs can be formed in this fashion. You have to find the longest chain which can be formed from the given set of pairs. 
 

Example 1:

Input:
N = 5
P[] = {5  24 , 39 60 , 15 28 , 27 40 , 50 90}
Output: 3
Explanation: The given pairs are { {5, 24}, {39, 60},
{15, 28}, {27, 40}, {50, 90} },the longest chain that
can be formed is of length 3, and the chain is
{{5, 24}, {27, 40}, {50, 90}}
*/



bool cmp(pair<int,int>a, pair<int,int> b){
    return a.second<b.second;
}
class Solution{
public:
    /*You are required to complete this method*/
    int maxChainLen(struct val p[],int n){
        //Your code here
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++) v.push_back({p[i].first, p[i].second}); //applying greedy technique here 
        sort(v.begin(),v.end(), cmp);
        int c=1, i=0,j=1;
        while(j<v.size()){
            if(v[i].second<v[j].first){
                c++;
                i=j; //finding all the pairs
                j++;
            }
            else j++;
        }
        return c;
    }
};




// explaination : https://www.youtube.com/watch?v=v0D3HtS8GAg
