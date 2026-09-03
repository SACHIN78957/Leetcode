class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int oddsmall=INT_MAX;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]%2!=0 && nums1[i]<oddsmall)
            {
                oddsmall=nums1[i];
            }
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]%2==0 && nums1[i]<oddsmall && oddsmall!=INT_MAX)
            {
                return false;
            }
        } 
        return true;
    }
};