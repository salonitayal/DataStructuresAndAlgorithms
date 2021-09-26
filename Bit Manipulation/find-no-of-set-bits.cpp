#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 13;
    int c=0;
    while(n)
    {
        ++c;
        n&=(n-1);
    }
    cout << c; 
	return 0;
}
