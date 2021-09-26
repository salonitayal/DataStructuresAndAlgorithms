#include <iostream>
using namespace std;

// unsigned int swapBits(unsigned int n, int i, int j)
// {
//     n ^= 1<<i;
//     n ^= 1<<j;
//     return n;
// }

int main() {
    unsigned int n=3;
	unsigned int i=31, rev=0;
    while(n)
    {
        int x;
        if(n&1)x=1;
        else x=0;

        unsigned int mask=0;
        mask = x << i;
        rev |= mask;
        --i;
        n = n >>1;
    }
    n=rev;
    cout << n;
	return 0;
}
