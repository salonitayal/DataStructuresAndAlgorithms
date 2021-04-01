class Solution {
public:
    int numDifferentIntegers(string s) {
        int c=0, x=0; 
        int i=0;
        set<string>st;
        while(i<s.length())
        {
            if('a' <= s[i] && s[i] <= 'z')
            {
                ++i;
                continue;
            }
            string x = "";
            while('0' <= s[i] && s[i] <= '9')
            {
                x += s[i];
                ++i;
            }
            int j=0;
            while(x[j] == '0')
            {
                ++j;
            }
            x = x.substr(j, x.length());
            st.insert(x);
            
        }
        return st.size();
        
    }
};