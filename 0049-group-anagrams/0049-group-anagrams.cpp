class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(int i=0;i<strs.size();i++)
        {
            string word=strs[i];

            vector<int> freq(26,0);
            for(int j=0;j<word.length();j++)
            {
                freq[word[j]-'a']++;
            }

            string key="";
            for(int j=0;j<26;j++)
            {
                key+='#' + to_string(freq[j]);
            }

            mp[key].push_back(word);
        }

        vector<vector<string>> ans;

        for(auto i=mp.begin();i!=mp.end();i++)
        {
            ans.push_back(i->second);
        }
        return ans;
    }
};