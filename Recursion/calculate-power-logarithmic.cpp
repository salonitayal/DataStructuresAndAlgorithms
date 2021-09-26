#include<bits/stdc++.h>
using namespace std;

// TC : log2 p
int res;
int po(int n, int p)
{
    if(p==0)return 1;
    if(p&1)res = n * po(n, p/2) * po(n, p/2);
    else res = po(n, p/2) * po(n, p/2);
    return res;
}
int main()
{
    cout << po(2, 5);
    return 0;
}

