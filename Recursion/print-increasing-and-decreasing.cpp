#include<bits/stdc++.h>
using namespace std;

void f_dec(int n)
{
    if(n==0)return;
    cout << n << endl;
    f_dec(n-1);
}

void f_inc(int n)
{
    if((n==0))return;
    f_inc(n-1);
    cout << n << endl;
}
int main()
{
    cout << "dec: ";
    f_dec(5);
    cout << "inc: ";
    f_inc(5);
    return 0;
}