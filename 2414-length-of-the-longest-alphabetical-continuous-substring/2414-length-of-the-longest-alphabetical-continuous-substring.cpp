class Solution {
public:
    int longestContinuousSubstring(string s) {
        int longest=1;
        int length=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1]+1)
            {
                length++;
            }
            else{
                length=1;
            }
            longest=max(longest,length);
        }
        return longest;
    }
};