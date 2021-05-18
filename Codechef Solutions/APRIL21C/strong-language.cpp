#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        // 5 2 a*b**
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int mx = 0, c = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '*')++c;
            else c=0;
            mx = max(mx, c);
        }
        if(mx >= k)cout << "YES";
        else cout << "NO";
        cout << endl;
    }
	return 0;
}
