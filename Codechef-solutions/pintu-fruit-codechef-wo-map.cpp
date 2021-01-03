#include<iostream>
#include<map>
#include <iterator>
#include<vector>    
#include <algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[n], b[n], x[m];

        for(int i=0; i<n; i++)cin >> a[i];
        for(int i=0; i<n; i++)cin >> b[i];
        for(int i=0; i<m; i++)x[i+1] = 0;

        //for(int i=0; i<m; i++)cout << x[i] << endl;
        
        for(int i=0; i<n; i++)
            x[a[i]] += b[i];
            
        sort(x, x+m);
        cout << *upper_bound(x, x+m, 0)<< endl;
    }
    return 0;
}