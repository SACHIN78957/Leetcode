class Solution {
public:
    int maxDistinct(string s) {
        vector<int> vec(26,0);
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(vec[s[i]-'a']==0)
            {
                vec[s[i]-'a']=1;
                count++;
            }
        }
        return count;
    }
};