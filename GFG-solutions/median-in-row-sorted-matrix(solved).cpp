#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, m; cin>>n>>m;
        int a[n][m], x[n*m], k=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m && k <n*m; j++, k++)
            {
                cin>>a[i][j];
                x[k] = a[i][j];
            }
        }
        sort(x, x+(n*m));
        int y = sizeof(x)/sizeof(x[0]); cout << x[y/2] << endl;
    }
    return 0;
}