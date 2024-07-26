class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int n=nums.size();
        int p;
        map<int,int> a;
        for(int i=0;i<n;i++)
        {
            int p=nums[i];
            a[p]++;
        }
        for(auto i:a)
        {
            if(i.second>1)
            {
                p=i.first;
            }
        }
        return p;
    }
};