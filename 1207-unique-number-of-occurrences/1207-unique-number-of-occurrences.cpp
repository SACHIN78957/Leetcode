class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++)
        {
            freq[arr[i]]++;
        }

        unordered_set<int> available;
        for(auto it:freq)
        {
            if(available.count(it.second))
            {
                return false;
            }

            available.insert(it.second);
        }
        return true;
    }
};