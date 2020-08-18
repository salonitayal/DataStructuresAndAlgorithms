#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s;
        cin >> s;
        map<char, int> m;
        for(int i=0; i<n; i++)
        {
            ++m[s[i]];
        }
        int c=1;
        for(auto i:m)
        {
            if(i.second%2!=0)
            {
                cout << "NO";
                c = 0;
                break;
            }
        }
        if(c)cout << "YES";
        cout << endl;
    }
	return 0;
}
