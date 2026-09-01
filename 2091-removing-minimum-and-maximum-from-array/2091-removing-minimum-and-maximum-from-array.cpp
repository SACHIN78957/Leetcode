class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minidx=0,maxidx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<nums[minidx])
            {
                minidx=i;
            }
            if(nums[i]>nums[maxidx])
            {
                maxidx=i;
            }
        }
        int small_idx=min(minidx,maxidx);
        int large_idx=max(minidx,maxidx);

        int from_left=large_idx+1;
        int from_right=nums.size()-small_idx;
        int mid=(nums.size()-large_idx)+small_idx+1;

        return min({from_left,from_right,mid});
    }
};