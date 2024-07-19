class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int h;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int p=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    p++;
                }
            }
            if(p>(n/2))
            {
                h=nums[i];
                break;
            }
        }
        return h;
    }
};