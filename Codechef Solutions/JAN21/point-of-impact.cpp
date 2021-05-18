#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k, x, y; cin >> n >> k >> x >> y;

        if(x == y)cout << n << " " << n << endl;
        else
        {
           vector<pair<int, int>> v;
           if(x < y)
           {
               v.push_back(make_pair(x-y+n, n));
               v.push_back(make_pair(n, n-y+x));
               v.push_back(make_pair(y-x, 0));
               v.push_back(make_pair(0, y-x));
           }
           else
           {
               v.push_back(make_pair(n, y+n-x));
               v.push_back(make_pair(y+n-x, n));
               v.push_back(make_pair(0, x-y));
               v.push_back(make_pair(x-y, 0));
           }
           int x = (k-1)%4;
           cout << v[x].first << " " << v[x].second << endl;
        }
    }
    return 0;
}