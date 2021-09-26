#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>>n; 
        int a[n]; for(int i=0; i<n; i++)cin>>a[i];

        int max = 0; 
        for(int j=n-1; j>0; j--)
        {
            for(int i = j-1; i>=0; i--)
            {
                if(a[i] <= a[j]  &&  (j-i) > max)
                    max = j-i;
                    //cout << max<<endl;
            }
        }
        cout << max<<endl;
    }
    return 0;
}