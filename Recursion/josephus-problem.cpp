#include<bits/stdc++.h>
using namespace std;

void rec(vector<int>& v, int k, int i)
    {
        if(v.size()==1)
        {
            return;
        }
        v.erase(v.begin()+i);
        rec(v, k, (i+k)%v.size());
    }
    int josephus(int n, int k)
    {
       --k;
       vector<int> v(n);
       for(int i=0; i<n; i++)v[i]=i+1;
       rec(v, k, k);
       return v[0];
    }
int main()
{
    int n, k; cin >> n >> k;
    cout << josephus(n, k);
}