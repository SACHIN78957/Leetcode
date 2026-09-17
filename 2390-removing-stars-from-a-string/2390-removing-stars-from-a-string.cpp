class Solution {
public:
    string removeStars(string s) {
        string st;
        for(char x:s)
        {
            if(x=='*')
            {
                st.pop_back();
            }
            else{
                st.push_back(x);
            }
        }
        return st;
    }
};