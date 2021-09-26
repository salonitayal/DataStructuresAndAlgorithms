#include<iostream>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n, m; cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin>>a[i][j];

        int i=0, max=0, j=m-1;
        while(i<n && j>=0)n
        {
            if(a[i][j] == 1)
            {
                max = i; --j;
            }
            else ++i;
        }
        cout << max << endl;
    }
    return 0;   
}