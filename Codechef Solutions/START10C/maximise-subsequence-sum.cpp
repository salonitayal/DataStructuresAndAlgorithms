#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> v(n);
        vector<int> nv;
        int flg=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            if(v[i]<0)
            {
                flg = 1;
                nv.push_back(v[i]);
            }
        }
        sort(nv.begin(), nv.end());
        //vchk(nv);
        int res=0;
        int nsm=0;
        
        if(flg==0)
        {
            for(auto i:v)res += i;
            cout << res;
        }
        else
        {
            for(int i=0; i<k; i++)nsm += -(nv[i]);
            for(auto i:v)
                if(i>0)nsm += i;
            
            cout << nsm;
        }
        cout << endl;
    }
    return 0;
}