#include<bits/stdc++.h>
using namespace std;
int res;
int fact(int n)
{
    if((n==0))return 1;
    res = n * fact(n-1);
    return res;
}
int main()
{
    cout << fact(5);
    return 0;
}