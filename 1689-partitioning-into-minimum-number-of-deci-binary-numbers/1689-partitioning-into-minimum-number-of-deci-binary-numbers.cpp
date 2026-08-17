class Solution {
public:
    int minPartitions(string n) {
        int max=0;
        for(int i=0;i<n.length();i++)
        {
            if(n[i]-'0'>max)
            {
                max=n[i]-'0';
            }
        }
        return max;
    }
};