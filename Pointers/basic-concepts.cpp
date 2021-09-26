#include <bits/stdc++.h>
using namespace std;

int count(int i)
{
    ++i;
    return i;
}
int main() {
    int i=7;
    int* p = &i;
    cout << *p << endl;
    cout << p << endl;
    int *q;
    i = count(i);
    q = p;
    cout << *q << endl;
    cout << i;
    
	return 0;
}
