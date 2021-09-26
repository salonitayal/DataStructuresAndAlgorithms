#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	cin.ignore();
	while(t--){
	   string s; cin >> s;
	   list<char> lis;
	   int maxm = 1;
	   
	   for(int i=0; s[i]; i++){
	       if(find(lis.begin(), lis.end(), s[i]) == lis.end()){
	           lis.push_back(s[i]);
	       } else {
	           while(lis.front() != s[i])
	               lis.pop_front();
	           lis.pop_front();
	           lis.push_back(s[i]);
	       }
	       if(maxm < lis.size()) maxm = lis.size();
	   }
	   cout << maxm << endl;
	}
	return 0;
}