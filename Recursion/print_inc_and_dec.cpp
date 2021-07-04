#include<bits/stdc++.h>
using namespace std;

void f_inc_n_dec(int n)
{
    if((n==0))return;
    cout << n << endl;
    f_inc_n_dec(n-1);
    cout << n << endl;
}
int main()
{
    f_inc_n_dec(5);
    return 0;
}