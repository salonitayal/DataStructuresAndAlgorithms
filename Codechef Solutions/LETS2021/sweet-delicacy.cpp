#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x; cin >> x;
    int cnt=0;
    while(x>0)
    {
        if(x&1)++cnt;
        x /= 2;
    }
    cout << cnt << endl;
    return 0;
}