class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        nth_element(nums.begin(), nums.begin() + n / 2, nums.end());
        int mid=nums[n/2];
        long long count=0;
        for(int i=0;i<n;i++)
        {
            count+=abs(mid-nums[i]);
        }
        return count;
    }
};