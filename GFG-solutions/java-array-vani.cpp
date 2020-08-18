#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n, l; cin>>n>>l; 
        int a[n]; for(int i=0; i<n; i++)cin>>a[i];
        int i=0, c=0;
        while(i<n)
        {
            if(a[i+l]==0){i+=l; c+=l;}
            else if(a[i+1]==0){i++; c++; a[i]=1;}
            else if(a[i-1]==0){i--; c--; a[i]=1;}
            else {c=0;break;}
        }
        if(c==n-1 && a[n-1]==0)cout << "YES" << endl;
        if(c>n)cout << "YES" << endl;
        else if(c<n)cout << "NO" <<endl;
        }
    return 0;
}

