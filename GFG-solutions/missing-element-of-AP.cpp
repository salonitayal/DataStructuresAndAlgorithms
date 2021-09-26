#include<iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >>n; int a[n];
        for(int i = 0; i< n; i++)cin >> a[i];

        int d = (a[n-1] - a[0])/(n);
        for(int i = 0; i < n-1; i++)
        {
            if(a[i+1] != a[i]+d)
            {
                cout << a[i]+d << endl; break;
            }
        }
    }
    return 0;
}