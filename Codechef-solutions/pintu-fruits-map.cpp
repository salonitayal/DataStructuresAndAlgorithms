#include<iostream>
#include<map>
#include <iterator>
#include <algorithm>
using namespace std;

typedef multimap<int, int> :: iterator itr;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[n], b[n];
        multimap<int, int> mm;

        for(int i=0; i<n; i++)cin >> a[i];
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
            mm.insert(make_pair(a[i], b[i]));
        }

        int sm=0;
        int minm=INT32_MAX;
        for(int i=1; i<=m; i++)
        {
            if(mm.find(i) != mm.end())
            {
                pair<itr, itr> x = mm.equal_range(i);
                
                for(itr it = x.first; it != x.second; ++it)
                    sm += it->second;
                
                if(minm > sm)minm = sm;
                sm = 0;
            }
        }
        cout << minm<< endl;

    }
    return 0;
}