#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n; 
	    int a[n]; 
	    for(int i=0;  i<n; i++)cin >> a[i];
	    unordered_map<int, int> m;
	    int s=0, r=0;
		++m[0];                  // If first element is 0. Then +1
	    for(int i=0; i<n; i++)
		{
			s += a[i];
			if(m.find(s) != m.end())
			    r += m[s];
			++m[s];
		}
		cout << r << endl;
	}
	return 0;
}