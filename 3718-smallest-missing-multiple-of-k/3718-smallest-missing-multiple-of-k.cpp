class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> us;
        for(int i=0;i<nums.size();i++)
        {
            us.insert(nums[i]);
        }
        int res=k;
        while(us.count(res))
        {
            res+=k;
        }
        return res;
    }
};