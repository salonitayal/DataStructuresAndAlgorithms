// solved on my own
#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    int a[n], b[n];
	    for(int i=0; i<n; i++) cin >> a[i];
	    for(int i=0; i<n; i++) cin >> b[i];
	    
	    int f = 0, bck = 0;
	    for(int i=0; i<n; i++){
	        if(a[i] <= b[i]) 
	            ++f;
	        else break;
	    }
	    
	    for(int i=0; i<n; i++){
	        if(a[n - i - 1] <= b[i])
	            ++bck;
	        else break;
	    }
	    if(f == n && bck == n) cout << "both" << endl;
	    else if(f == n) cout << "front" << endl;
	    else if(bck == n) cout << "back" << endl;
	    else cout << "none" << endl;

	}
	return 0;
}
