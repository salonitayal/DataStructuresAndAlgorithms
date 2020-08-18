#include<iostream>
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        int a, b; cin >> a >> b;
        int n[4];
        int max = a + b;
        n[0] = a/10, n[1] = a%10;
        n[2] = b/10, n[3] = b%10;
        
        if(n[0]*10 + n[2] + n[1]*10 + n[3] > max && n[2] != 0)max = n[0]*10 + n[2] + n[1]*10 + n[3];
        if(n[3]*10 + n[1] + n[2]*10 + n[0] > max && n[0] != 0)max = n[3]*10 + n[1] + n[2]*10 + n[0];
        
        cout << max << endl;
    }
}