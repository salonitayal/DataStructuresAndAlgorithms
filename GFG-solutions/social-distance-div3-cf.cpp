#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s; 
        int c=0;                                                                                                                                                                              
        for(int i=0; i<n; i++)
        {
            if(s[i] != '1')
            {
                if(s[i+k] != '1' && s[i-k] != '1')
                {
                    ++c; s[i] = '1';
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}