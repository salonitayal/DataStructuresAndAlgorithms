#include <iostream>
using namespace std;

int main() {
    int r, o, c; cin >> r >> o >> c;
    o = 20-o;
    o *= 6*6;
    c += o;
    if(c > r)cout << "Yes";
    else cout << "No";
    cout << endl;
	return 0;
}
