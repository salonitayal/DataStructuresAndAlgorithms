#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int c = 0, c0 = 0;
        for(int i=0; s[i];)
        {
            if(s[i] == '1')
            {
                ++i;
                while(s[i] == '0')
                {
                    ++i; 
                    ++c0;
                }
                if(s[i] == '1' && c0 != 0)
                    ++c;
                c0 = 0;
            }
            else ++i;
        }
        cout << c << endl;
    }
    return 0;
}