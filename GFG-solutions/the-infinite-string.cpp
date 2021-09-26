#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long int t; cin >> t;
    while(t--)
    {
        long long int n; cin >> n;
        string a = "12345";
        a = "12345$54321";
        string x = "$$";

        while(a.length() <= n)
        {
            a = a + x + a;
            x = x + "$";
        }
        cout << a[n-1];
    }
    return 0;
}