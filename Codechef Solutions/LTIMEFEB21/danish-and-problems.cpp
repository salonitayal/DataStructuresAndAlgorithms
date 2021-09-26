#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int a[10]; for(int i=0; i<10; i++)cin >> a[i];
        int k; cin >>k;
        for(int i=9; i>=0; i--)
        {
            if(k && a[i])
            {
                int tmp = k;
                k -= a[i];
                a[i] -= tmp;
                if(a[i] < 0)a[i]=0;
            }
            else if(k)
            {
                continue;
            }
            else break;
        }
        for(int i=9; i>=0; i--)
        {
            if(a[i]>0)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
	return 0;
}
