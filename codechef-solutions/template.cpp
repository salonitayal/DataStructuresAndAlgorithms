#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=0; i<4; i++)v.push_back(i);
    v.erase(v.begin()+2);
    for(auto i:v)cout << i;
}