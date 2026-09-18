class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for(int x:asteroids)
        {
            bool alive=true;
            while(x<0 && !st.empty() && alive && st.back()>0)
            {
                if(abs(st.back()) < abs(x))
                {
                    st.pop_back();
                }
                else if(abs(st.back()) == abs(x))
                {
                    st.pop_back();
                    alive=false;
                }
                else{
                    alive=false;
                }
            }

            if(alive)
            {
                st.push_back(x);
            }
        }
        return st;
    }
};