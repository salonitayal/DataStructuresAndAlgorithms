class Solution {
public:
    bool halvesAreAlike(string s) {
     int a=0, b=0;
        int n=s.length();
        for(int i=0; i<n/2; i++)
        {
            if(s[i] == 'A' || s[i] == 'a' ||
               s[i] == 'E' || s[i] == 'e' ||
               s[i] == 'I' || s[i] == 'i' ||
               s[i] == 'O' || s[i] == 'o' ||
               s[i] == 'U' || s[i] == 'u')
                ++a;
        }
        for(int i=n/2; i<n; i++)
        {
            if(s[i] == 'A' || s[i] == 'a' ||
               s[i] == 'E' || s[i] == 'e' ||
               s[i] == 'I' || s[i] == 'i' ||
               s[i] == 'O' || s[i] == 'o' ||
               s[i] == 'U' || s[i] == 'u')
                ++b;
        }
        if(a==b)return true;
        return false;
    }
};