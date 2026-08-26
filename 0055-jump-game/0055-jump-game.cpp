class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachable_index=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(i>reachable_index)
            {
                return false;
            }
            reachable_index=max(reachable_index,i+nums[i]);
            if(reachable_index >= nums.size()-1)
            {
                return true;
            }
        }
        return true;
    }
};