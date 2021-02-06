#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n; cin >> n;
	int ans = 10;
	while(n % ans != 0)
	    --ans;
	cout << ans << endl;
	return 0;
}
