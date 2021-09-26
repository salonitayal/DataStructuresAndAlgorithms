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
        int am, bm, cm, tm, a, b, c; 
        cin >> am >> bm >> cm >> tm >> a >> b >> c;
        if((a>=am)&&(b>=bm)&&(c>=cm)&&(a+b+c>=tm))cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
