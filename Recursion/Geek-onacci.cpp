#include <iostream>
using namespace std;

int solve(int n, int a, int b, int c)
{
    if(n==0)return 0;
    if(n==1)return a;
    if(n==2)return b;
    if(n==3)return c;
    return solve(n-1, a, b, c)+solve(n-2, a, b, c)+solve(n-3, a, b, c);
}
int main() {
	//code
	int t; cin >> t; 
	while(t--)
	{
	    int a, b, c, n; cin >> a >> b >> c >> n;
	    int res = solve(n, a, b, c);
	    cout << res << endl;
	}
	return 0;
}