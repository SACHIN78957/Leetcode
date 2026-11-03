class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=nums[0];
        for(int x:nums)
        {
            if(x>max)
            {
                max=x;
            }
        }
        int res=0;
        for(int x:nums)
        {
            res+=max-x;
        }
        return res;
    }
};