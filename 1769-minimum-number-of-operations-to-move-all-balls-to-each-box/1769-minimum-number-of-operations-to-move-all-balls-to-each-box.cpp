class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int> left(n,0);
        vector<int> right(n,0);
        int sum=0,cost=0;
        for(int i=0;i<n;i++)
        {
            left[i]=cost;
            if(boxes[i]=='1')
            {
                sum++;
            }
            cost+=sum;
        }

        sum=0,cost=0;
        for(int i=n-1;i>=0;i--)
        {
            right[i]=cost;
            if(boxes[i]=='1')
            {
                sum++;
            }
            cost+=sum;
        }

        vector<int> res(n);
        for(int i=0;i<n;i++)
        {
            res[i]=left[i]+right[i];
        }

        return res;
    }
};