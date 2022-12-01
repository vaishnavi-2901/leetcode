class Solution {
public:
    int maxProfit(vector<int>& a) {
        int p=0,s=0,b=a[0];
        for(int i=1;i<a.size();i++){
            b=min(b,a[i]);
            s=a[i];
            p=max(p,s-b);
        }
        return p;
    }
};
