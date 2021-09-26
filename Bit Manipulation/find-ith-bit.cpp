#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 13;

    // Lets say you want to find 2nd bit
	int i=2;
    
    //create mask
	int mask = 1<<i;   // mask = 0100 ie 4
	
    n &= mask;        
    //    n = 1101
    // mask = 0100
    //    &   0100
    //    n = 4
    if(n)cout << "ith bit is set";
    else cout << "ith bit is not set";

	return 0;
}
