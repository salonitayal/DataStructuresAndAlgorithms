// ====================================  https://ide.geeksforgeeks.org/FVPl5HUXQH  ==========================================
#include<iostream>
#include<algorithm>
using namespace std;

int floor(int a[], int x, int l, int r)
{
    if(l<=r)
    {
        int p = (l+r)/2;
        if(a[p] <= x && a[p+1] >x)return p;
        else if(a[p] > x){r=p-1; floor(a, x, l, r);}
        else if(a[p] < x){l=p+1; floor(a, x, l, r);}
    }
}

int main()
{
    int t; cin >>t;
    while(t--)
    {
    int n, x; cin >> n>>x;
    int ans = 0;
    int a[n]; for(int i = 0; i < n; i++) cin >> a[i];

    if(a[0]>x)cout<<-1<<endl;
    else if(a[n-1] <= x)cout<<n-1<<endl;
    else cout<<floor(a, x, 0, n-1)<<endl;
    }
    return 0;
}