//=============================         https://ide.geeksforgeeks.org/bvNKwmlgdM       ================================
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        map<char, int> m1;
        for(int i=0; i<s.length(); i++) ++m1[s[i]];

        map<int, int> m2;
        for(auto i: m1) ++m2[i.second];

        if(m2.size() == 1)
        {
            cout << 1;
        }
        else if(m2.size() == 2)
        {
            int a[2], j = 0, flag = 0, ans = 0;
            for(auto i: m2)
            {
                if(i.second == 1)++flag;   // consider eg. xxxxyyzz and dry run

                a[j] = i.first;   // alloting the freq to array
                ++j;
            }
            ans = abs(a[0] - a[1]);
            if((flag == 1 || flag == 2) && ans == 1)
                cout << 1;
            else 
                cout << 0;
        }
        else 
            cout << 0; 
        
        cout << endl;

    }
    return 0;
}