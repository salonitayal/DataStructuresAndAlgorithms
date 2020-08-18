#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        unsigned int ans = n | (1 << k);
        cout << ans << endl;
    }
}