#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        (a>b)?cout << "A":cout << "B";
        cout << endl;
    }
    return 0;
}