class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        int freq[26]={};
        for(int i=0;i<n;i++)
        {
            int m=words[i].size();
            for(int j=0;j<m;j++)
            {
                freq[words[i][j]-'a']++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]%n!=0)
            {
                return false;
            }
        }
        return true;
    }
};