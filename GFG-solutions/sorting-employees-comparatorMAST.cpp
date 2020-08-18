#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, string> p1, pair<int, string> p2)
{
    if(p1.first < p2.first)
        return true;
    else if(p1.first > p2.first)
        return false;
    else 
        return p1.second < p2.second;  // whatever is ans to (p1.second < p2.second) will return(T/F)
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; 
        vector<pair<int, string>> v;

        while(n--)
        {
            string s; int num; 
            cin >> s >> num;

            v.push_back(make_pair(num, s));
        }

        sort(v.begin(), v.end(), comp);  //using comparator fnction
        for(auto i = v.begin(); i != v.end(); i++)
        {
            cout << i->second << " " << i->first << " ";
        }
        cout << endl;
    }
    return 0;
}