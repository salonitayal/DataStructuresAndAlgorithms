#include<bits/stdc++.h>
using namespace std;

int po(int n, int p)
{
    if((p==0))return 1;
    int res = n * po(n, p-1);
    return res;
}
int main()
{
    cout << po(2, 5);
    return 0;
}