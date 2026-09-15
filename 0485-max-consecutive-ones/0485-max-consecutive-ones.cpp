class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int longest=0;
        int length=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                length++;
            }
            else{
                length=0;
            }
            longest=max(longest,length);
        }
        return longest;
    }
};