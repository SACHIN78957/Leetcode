class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long m=mass;
        for(int x:asteroids)
        {
            if(x<=m)
            {
                m+=x;
            }
            else{
                return false;
            }
        }
        return true;
    }
};