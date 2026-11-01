class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int min=nums[0];
        int count=0;
        for(int x:nums)
        {
            if(x<min)
            {
                min=x;
            }
        }
        for(int i:nums)
        {
            int num=i-min;
            count+=num;
        }
        return count;
    }
};