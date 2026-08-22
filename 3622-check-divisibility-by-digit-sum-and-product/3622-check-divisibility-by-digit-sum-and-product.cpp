class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int digit=n;
        while(n>0)
        {
            int num=n%10;
            sum+=num;
            mul*=num;
            n=n/10;
        }
        if(digit%(sum+mul)==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};