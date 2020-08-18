#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        map<int, int> m;
        int n; cin>> n; int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            ++m[a[i]];
        }
        multimap<int, int, greater<int>> m2; // Multimap let you take other stl containers as pair too. 
                                             // also allows keys of same values
        sort(a, a+n);
        for(int i=0; i<n; i++)
            m2.insert(pair<int, int>(m[a[i]], a[i]));
        //for(auto it=m2.begin(); it != m2.end(); it++)cout << it->second << " ";     USE THIS EITHER
        for(auto i:m2)cout << i.second<< " ";
        cout << endl;
    }
    return 0; 

}