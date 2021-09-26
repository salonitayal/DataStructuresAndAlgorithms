#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int i, int sm, int tgt, string x)
{
    if(sm == tgt)
    {
        cout << x << endl;
        return;
    }
    if(sm > tgt)
        return;
    for(int j=i; j<n; j++)
        solve(a, n, j, sm+a[j], tgt, x+to_string(a[j]));
}
int main()
{
    int n; cin >> n;
    int a[n]; for(int i=0; i<n; i++)cin >> a[i];
    //sort the array
    sort(a, a+n);
    //remove duplicates
    int j=0;
    for(int i=1; i<n; i++)
    {
        if(a[i-1] != a[i])
        {
            a[j++] = a[i-1];
        }
    }
    a[j++] = a[n-1];
    n = j; // as the size is reduced now 
    int tgt; cin >> tgt;
    for(int i=0; i<n; i++)solve(a, n, i, a[i], tgt, to_string(a[i]));
    
    return 0;
}

