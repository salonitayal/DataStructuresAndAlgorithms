#include<bits/stdc++.h>
#define intl long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    intl t; cin >> t;
    while(t--)
    {
        intl m, n; cin >> n >> m;
        intl arr[n+1];
        for(intl i=0; i<=n; i++)arr[i]=1;
        intl c=0;
        for(intl a = 2; a<=n; a++)
        {
            intl x = m%a;
            c+=arr[x];
            for(intl b=x; b<=n; b+=a)
            {
                arr[b]++;
            }
        }
        cout << c << endl;
    }
    return 0;
}