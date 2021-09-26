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
        int sa, sb, sc; cin >> sa >> sb >> sc;
        int mn = min(sa, sb);
        mn = min(mn, sc);
        if(mn == sa)cout << "Draw";
        else if(mn == sb)cout << "Bob";
        else cout << "Alice" ;
        cout << endl;
        //cout << mn;
    }
    return 0;
}