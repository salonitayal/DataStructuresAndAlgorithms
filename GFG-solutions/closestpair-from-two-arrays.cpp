//SUSSESSFULLY DID IT

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n, m; 
        cin >> n >> m;
        int a[n], b[m];
        int p, q;
        for(int i = 0; i < n; i ++)cin >> a[i];
        for(int i = 0; i < m; i ++)cin >> b[i];

        int x;cin >> x;
       
        int min = INT32_MAX;
        sort(a, a+n);
        sort(b, b+m);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int dif = abs(x - (a[i] + b[j]));
                if(dif < min)
                {
                    min = dif;
                    p = a[i];
                    q = b[j];
                }
                else if(abs(a[i] + b[j]) > x)
                {
                    exit;
                }
            }
        }
        cout << p << " " << q << endl;

    }
    return 0;
}