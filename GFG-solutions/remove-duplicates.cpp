#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	int t; cin >> t;
	cin.ignore();
	while(t--){
	    string s; getline(cin, s);
	    
	    int a[256] = {0};
	    for(int i=0; i<s.length(); i++){
	        if(a[s[i]] == 0){
	            cout << s[i];
	            ++a[s[i]];
	        }
	    }
	    cout << endl;
	}
	return 0;
}