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
        ll n, s, a; cin >> n >> s >> a;
        ll cs=0, ca=0;
        while(n--)
        {
            string x; cin >> x;
            if(x[0] == 'E' || x[0] == 'Q' || x[0] == 'U' || x[0] == 'I' || x[0] == 'N' || x[0] == 'O'|| x[0] == 'X')
                cs += s;
            else 
                ca += a;
        }
        if(cs > ca)cout << "SARTHAK";
        else if(cs < ca)cout << "ANURADHA";
        else cout << "DRAW";
        cout << endl;
    }
    return 0;
}