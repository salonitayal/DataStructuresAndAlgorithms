#include <iostream>
using namespace std;

int main() {
	    int n; cin >> n;
	    int a[n];
	    for(int i=0; i<n; i++)cin >> a[i];

        int l=0, m = 0, h = n-1;
        while(m <= h)
        {
            if(a[m] == 0)
            {
                swap(a[l], a[m]);
                ++l, ++m;
            }
            else if(a[m] == 1)++m;
            else if(a[m] == 2)
            {
                swap(a[h], a[m]);
                --h;
            }
        }

        for(int i=0; i<n; i++)cout << a[i];
	
	return 0;
}
