// solved 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int k, x; cin >> k >> x;
        unordered_map<char, int> um;
        int c = 0;
        for(int i=0; s[i]; i++)
        {
            ++um[s[i]];
            if(um[s[i]] <= x)
            {
                ++c;
            }
            else 
            {
                if(k)
                {
                    --um[s[i]];
                    --k;
                }
                else 
                    break;
            }
        }
        cout << c << endl;
    }
    return 0;
}