#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2; 
        cin >> s1;
        cin >> s2;
        set <char> st1, st2, st3;
        for(int i=0; s1[i]; i++)
            st1.insert(s1[i]);
        for(int i=0; s2[i]; i++)
            st2.insert(s2[i]);

        for(int i=0; s1[i]; i++)
        {
            if(st2.find(s1[i]) == st2.end())
                st3.insert(s1[i]);
        }
        for(int i=0; s2[i]; i++)
        {
            if(st1.find(s2[i]) == st1.end())
                st3.insert(s2[i]);
        }
        for(auto i : st3)cout << i;
        cout << endl;
    }
    return 0;
}