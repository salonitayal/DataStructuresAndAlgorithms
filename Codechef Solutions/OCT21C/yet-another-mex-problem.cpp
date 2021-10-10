/******************************************
		* AUTHOR : SALONI TAYAL *
******************************************/

#include <bits/stdc++.h>
#define ll unsigned long long int
#define vchk(v) for(auto i:v)cout << i << " ";
#define p(a) cout << a << endl;
#define MOD 1000000007
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> v; 
    int f=1;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        if(x==0)f=0;
        v.push_back(x);
    }
    if(f)
    {
        cout << 0;
        return;
    }
    sort(v.begin(), v.end());
    vector<int> mex;
    int mx=0, idx=n+1;
    mex.push_back(1);
    for(int i=1; i<n; i++)
    {
        if(v[i-1]+1==v[i])
            mex.push_back(v[i]+1);
        else
        {
            mx = v[i-1]+1;
            idx = i+1;
            mex.push_back(mx);
            break;
        }
    }
    for(int i=idx; i<n; i++)
    {
        mex.push_back(mx);
    }
    
    int N = ((n-1)*(n))/2;
    sort(mex.begin(), mex.end());
    if(k-1<=N-1)cout << 0;
    else cout << mex[k-N-1];
}
int main()

{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t; cin >> t;
	while(t--)
	{
		solve();
		cout << endl;
	}
	return 0;
}