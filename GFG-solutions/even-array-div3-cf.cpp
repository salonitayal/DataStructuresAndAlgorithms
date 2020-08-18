#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n; int a[n];
        int od = 0, ev = 0;
        for(int i=0; i<n; i++)cin >> a[i];

        for(int i=0; i<n; i++)
        {
            if(i%2 == 0 && i%2 != a[i]%2)++od;
            else if(i%2 != 0 && i%2 != a[i]%2)++ev;
        }
        if(od == ev)cout << ev << endl;
        else cout << -1 << endl;
    }
    return 0;
}