#include<bits/stdc++.h>
using namespace std;
int c=0;
void solve(int n, int itm, int cnt, vector<int> x)
{
    if(cnt == itm+1)
    {
        for(int i=0; i<n; i++)cout << x[i];
        cout << endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(x[i] == 0)
        {
            x[i] = cnt ;
            solve(n, itm, cnt+1, x);
            x[i] = 0;
        }
    }
    

}

int main()
{
    int n, itm; cin >> n >> itm;
    vector<int> x(n);
    for(int i=0; i<n; i++)x[i] = 0;
    solve(n, itm, 1, x);
    return 0;
}

