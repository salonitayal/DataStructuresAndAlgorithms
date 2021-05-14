#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int val;
void to_float(int val)
{
    cout << fixed << setprecision(1) << (float)val << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b; cin >> a >> b;
    to_float(a+b);
    to_float(a-b);
    to_float(a*b);
    if(a>b)
        to_float(a/b);
    else 
    {
        a *= 10;
        cout << fixed << setprecision(1) << (float)b/a;
    }
    return 0;
}