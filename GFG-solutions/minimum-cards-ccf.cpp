#include <iostream>
#include <string>
#define ll long long int
using namespace std;

int main() {

	ll n; cin >> n;
	string s, x=""; cin >> s;
	
	for(ll i=0; i<s.length(); i++) 
	{
	    if(s[i] != s[i+1] )
	        x += s[i];
	}
	ll ans = s.length()-x.length();
	cout << ans << endl;
	return 0;
}