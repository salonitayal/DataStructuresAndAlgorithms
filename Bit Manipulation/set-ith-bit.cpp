#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 13;

    // Lets say you want to set 2nd bit
	int i=1;
    
    //create mask
	int mask = 1<<i;   // mask = 0100 ie 4
	
    n |= mask;        
    //    n = 1101
    // mask = 0010
    //    |   1111



	return 0;
}
