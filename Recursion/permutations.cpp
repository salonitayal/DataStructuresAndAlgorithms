#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void solve(int n, int itm, int i, string x)
{
    if(cnt == itm)
    {
        cout << x << endl;
        return;
    }
    if(i == n)return;
    ++cnt;
    x[i]=cnt+'0';
    solve(n, itm, i+1, x);
    --cnt;
    x[i]='_';
    solve(n, itm, i+1, x);

}

int main()
{
    int n, itm; cin >> n >> itm;
    string x="";
    for(int i=0; i<n; i++)x += "_";
    solve(n, itm, 0, x);
    
    return 0;
}

