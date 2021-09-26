#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++)cin >> a[i];
    int q; cin >> q;
    while(q--)
    {
        int x, k; cin >> x >> k;
        int res = 0, lef=0;
        --x;
        if(k>a[x])
        {
            k-=a[x];
            a[x]=0;
        }
        else
        {
            a[x]-=k;
            k=0;
        }
        while(k != 0 && x != n)
        {
            ++res;
            ++x;
            if(k>a[x])
            {
               k-=a[x];
               if(a[x]!=0)
               {
                   lef = a[x];
               }
               a[x]=0;
            }
            else
            {
                a[x]-=k;
                k=0;
            }
        }
        cout << res*lef << endl;

    }
	return 0;
}
