#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int c=1;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i] == '1')
            {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
                cout << i << endl;
                c = 0;
                break;
            }
        }
        if(c)cout << -1 << endl;
        cout << s.length();
    }                                                                                                                                                                                                                                                                       
    return 0;
}                                                                   