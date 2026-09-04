class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> suffix_min(n);
        suffix_min[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffix_min[i]=min(nums[i],suffix_min[i+1]);
        }
        int max_num=0;
        for(int i=0;i<n;i++)
        {
            max_num=max(max_num,nums[i]);
            if(max_num-suffix_min[i] <= k)
            {
                return i;
            }
        }
        return -1;
    }
};