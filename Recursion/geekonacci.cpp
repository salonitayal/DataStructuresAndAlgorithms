#include <iostream>
using namespace std;
int recur(int a, int b, int c, int n)
{
    if(n==3)return tmp;
    int tmp = a + b + c;
    a = b;
    b = c;
    c = tmp;
    recur(a, b, c, n-1);
}

int main() {
	int t; cin >> t; 
	while(t--)
	{
	    int a, b, c, n; cin >> a >> b >> c >> n;
	    cout << recur(a, b, c, n);
	}
	return 0;
}