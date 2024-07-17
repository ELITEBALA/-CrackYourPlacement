class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n;i++)
        {
            int sum;
            for(int j=i+1;j<n;j++)
            {
                sum=nums[i];
                sum+=nums[j];
                if(sum==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};