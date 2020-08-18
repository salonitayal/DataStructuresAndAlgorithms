#include <iostream>
#include <cmath>
#include <vector>
#define ll long long int 
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; 
        vector<ll> v;
        ll c1 = 0, s = 0;

        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            if(x != 0)
                v.push_back(x);
        } 
        
        for(ll i=0; i<n && i < v.size(); i++)
        {
            s += v[i];
            for(ll k=i+1; k<v.size(); )
            {
                --v[k];
                if(v[k] <= 0)
                   v.erase(v.begin() + k);
                else 
                    ++k;                                                                                                                                                                                
            }
        }
        cout << s%1000000007 << endl;
        
    }
}