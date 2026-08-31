class Solution {
public:
    char repeatedCharacter(string s) {
        bool arr[26]={false};
        for(int i=0;i<s.length();i++)
        {
            if(arr[s[i]-'a'])
            {
                return s[i];
            }
            arr[s[i]-'a']=true;
        }
        return ' ';
    }
};