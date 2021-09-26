#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
  
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main() {
	int t; cin >> t;
	while(t--)
	{
	    ll n; cin >> n;
	    ll arr[n]; 
	    for(ll i=1; i<n; i++)
        {
            arr[0]=1;
            arr[i] = arr[i-1]+2;
        }
	    ll v[n+1];
	    v[1]=1;
	    v[2]=2;
	    v[3]=2;
	    v[4]=3;
	    v[5]=2;
	    v[6]=4;
	    v[7]=2;
	    if(n>7)
	    {
	        for(ll i=8; i<=n; i++)
	        {
	            if(isPrime(i))v[i]=2;
	            else
	            {
	                for(ll j = i-1; j>0; j--)
	                {
	                    if(i%j==0)
	                    {
	                        v[i]=j;
	                        break;
	                    }
	                }
	            }
	        }
	    }
	    ll c=0;
	    for(ll i=0; i<n; i++)
	    {
	        arr[i] += v[i+1];
	        if(arr[i]%2)++c;
	    }
	    cout << c << endl;
	}
	return 0;
}
