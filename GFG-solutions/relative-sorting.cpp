#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[n], b[m];
        map <int, int> mp;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            ++mp[a[i]];
        }
        for(int i=0; i<m; i++) cin >> b[i];

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<mp[b[i]]; j++)cout << b[i] << " ";
            mp.erase(b[i]);
        }
        for(auto i : mp)
        {
            for(int j=0; j<i.second; j++)cout << i.first << " ";
        }
        cout << endl;

    }
    return 0;
}