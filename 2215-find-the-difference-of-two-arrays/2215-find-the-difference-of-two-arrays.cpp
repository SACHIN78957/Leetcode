class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);
        unordered_set<int> st1(nums1.begin(),nums1.end());
        unordered_set<int> st2(nums2.begin(),nums2.end());
        for(int x:st1)
        {
            if(st2.find(x)==st2.end())
            {
                answer[0].push_back(x);
            }
        }
        for(int x:st2)
        {
            if(st1.find(x)==st1.end())
            {
                answer[1].push_back(x);
            }
        }
        return answer;
    }
};