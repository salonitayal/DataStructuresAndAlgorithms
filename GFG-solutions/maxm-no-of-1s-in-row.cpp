#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, m; cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin>>a[i][j];

        int l=0, r=m, i=0;
        while(l<=r && i<m)
        {
            int p=(l+r)/2;
            if(a[i][0] == 1)cout << i << endl;
            else if(a[i][p] == 1 && a[i][p-1] < 1)cout << i << endl;
            else if(a[i][p] == 1 && a[i][p-1] == 1) --r;
            else if(a[i][p] < 1)++l;

            ++i;
        }
    }
    return 0;
}