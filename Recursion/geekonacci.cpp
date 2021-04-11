#include <iostream>
using namespace std;
int recur(int &a, int &b, int &c, int n)
{
    if(n==4)return a+b+c;
    int tmp = recur(a, b, c, n-1);
    a = b;
    b = c;
    c = tmp;
    return a+b+c;
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