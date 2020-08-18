#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll a[n], ans[n];
        for(int i=0; i<n; i++)cin >> a[i];

        stack<ll> s;
        for(int i=n-1; i>= 0; i--)
        {
            while(!s.empty() && a[i] >= s.top())
                s.pop();

            ans[i] = s.empty()? -1: s.top();

            s.push(a[i]);
        }
        
        for(auto i:ans)cout << i << " ";
        cout<<endl;
    }
}