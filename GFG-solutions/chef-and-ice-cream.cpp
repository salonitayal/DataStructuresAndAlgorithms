#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    int a[n];
	    int m[20] = {0};
	    int c = 0;
	    for(int i=0; i<n; i++)
	    {
	        cin >> a[i];
            ++m[a[i]];

            if(a[i] != 10 && a[i] != 15)
                ++c;
            else 
            {
                if(m[a[i] - 5] > 0)
                {
                    ++c;
                    --m[a[i] - 5];
                }
                else if(m[5] > 1)
                {
                    --m[5];
                    --m[5];
                    ++c;
                }
            }
        }
        if(c == n)cout << "YES";
        else cout << "NO";
        cout << endl;
    }
	return 0;
}
