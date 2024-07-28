class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int c=prices[0];
        int p=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<c)
            {
                c=prices[i];
            }
            p=prices[i]-c;
            maxi=max(maxi,p);
        }
        return maxi;
    }
};