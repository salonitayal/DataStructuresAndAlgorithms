#include <iostream>
#include<algorithm>
#define ll int
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; ll a[n];
        for(int i = 0; i< n; i++)cin >> a[i];
        sort(a, a+n);
        
        ll m_c = a[0];//max_current
        ll c = 1, cn=0;
        for(ll i = 0; i< n-1; i++)
        {
            if(m_c == a[i+1])++c;
            else 
            {
                m_c = a[i+1];
                c=1;
            }
            if(c >n/2){
                cout << m_c << endl;
                ++cn;
                break;
            }
        }
        if(!cn)cout << -1<< endl;
    }
    return 0;
    
}

