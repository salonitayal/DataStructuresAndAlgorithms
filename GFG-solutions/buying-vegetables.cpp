#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n][3];
        for(int i=0; i<n; i++)
            for(int j=0; j<3; j++)
                cin >> a[i][j];

        int s = 0, minm = INT32_MAX, x = -1, y;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(j == x && x < 2) ++j;
                if(j == x && x == 2)break;

                if(minm > a[i][j])
                {
                    minm = a[i][j];
                    y = j;
                }
            }
            s += minm;
            minm = INT32_MAX;
            x = y;
        }
        cout << s << endl;
    }
    return 0;
}