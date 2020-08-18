#include<bits/stdc++.h>
using namespace std;

int findlargest(int x)
{
    int maxm = -1;
    while (x > 0)
    {
        maxm = max(maxm, x%10);
        x /= 10;
    }
    return maxm;
}

int findsmallest(int x)
{
    int minm = 100;
    while (x > 0)
    {
        minm = min(minm, x%10);
        x /= 10;
    }
    return minm;
}

int findseconddigit(int x)
{
    x /= 10;
    x %= 10;
    return x;
}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++)cin >> a[i];

    int lar[n], sml[n];
    for(int i=0; i<n; i++)
    {
        lar[i] = findlargest(a[i]) * 11;
        sml[i] = findsmallest(a[i]) * 7;

        lar[i] += sml[i];

        lar[i] = findseconddigit(lar[i]);
    }

    int flageven[10] = {0}, flagodd[10] = {0};
    for(int i=0; i<n; i+= 2)
    {
        ++flageven[lar[i]];
    }
    for(int i=1; i<n; i+= 2)
    {
        ++flagodd[lar[i]];
    }

    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(flageven[i] == 2)++ans;
        if(flageven[i] > 2)ans += 2;
    }
    for(int i=0; i<n; i++)
    {
        if(flagodd[i] == 2)++ans;
        if(flagodd[i] > 2)ans += 2;

    }
    cout << ans ; 
}
