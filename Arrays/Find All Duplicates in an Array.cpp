class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>b;
        unordered_map<int,int>a;
        for(int i=0;i<n;i++)
        {
            a[nums[i]]++;
        }
        for(auto i : a)
        {
            if(i.second>1)
            {
                b.push_back(i.first);
            }
        }
        return b;
    }
};