class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1, j=b.length()-1;
        string x="";
        int c=0;
        while(i>=0 || j>=0)
        {
            if(i>=0)
            {
                c+=a[i]-'0';                                                                                                                                                                                                                                                                                  
                --i;
            }
            if(j>=0)
            {
                c+=b[j]-'0';
                --j;
            }
            x.push_back((c%2)+'0');
            (c>1)?c=1:c=0;
        }
        if(c)x.push_back('1');
        reverse(x.begin(), x.end());
        return x;
    }
};