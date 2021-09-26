#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 13;

    // Lets say you want to clear 2nd bit
	int i=2;
    
    //create mask
	int mask = 1<<i;   // mask = 0100 ie 4
	
    n ^= mask;        
    //    n = 1101
    // mask = 0100
    //    ^ = 1001

	return 0;
}
