#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    map<string, int> m;
    m["xoro"]=0;
    string s="xoro";
    m[s]=-1;
    v.push_back("xoro");
    m[v[0]]=100;
    for(auto i:m)cout << i.second<< " ";
	return 0;
}
