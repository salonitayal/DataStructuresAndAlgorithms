class Solution {
public:
    int minOperations(int n) {
        int n1=n/2, res=0;
        while(n1)
        {
            res += (n-((n1-1)*2+1));
            --n1;
        }
        return res;
    }
};