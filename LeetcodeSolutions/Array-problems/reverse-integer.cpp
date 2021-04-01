class Solution {
public:
    int reverse(int val) {
        int flag = 1;
        long int x = val;
        if(x < 0){
            flag = -1;
            x *= -1;
        }
        
        long int rev = 0;
        while(x != 0)
        {
            int dig = x % 10;
            rev = 10 * rev + dig;
            x /= 10;
        }

        if(rev > INT_MAX || rev < INT_MIN)return 0;
        return flag*rev;
    }
};