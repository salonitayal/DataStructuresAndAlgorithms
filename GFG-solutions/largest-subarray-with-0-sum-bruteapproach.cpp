#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];

        int max=0;
        for(int i=0; i<n; i++)
        {
            int s=0;
            for(int j=i; j<n; j++)
            {
                s += a[j];
                if(s == 0 && j-i > max) max = j-i;
            }
        }
        cout << max+1 << endl;
    }
    return 0;
}