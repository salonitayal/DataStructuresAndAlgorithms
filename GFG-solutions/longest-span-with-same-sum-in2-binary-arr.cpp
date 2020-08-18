#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n; cin >> n; 
        int a[n], b[n];
        map<int, int> am;
        int sm = 0;
        for(int i=0; i<n; i++)
             cin >> a[i];
        
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
            a[i] -= b[i];
        }

        int ans = 0;
        for(int i=0; i<n; i++)
        {
            sm += a[i];
            if(sm == 0)ans = i+1;

            if(am.find(sm) == am.end())am[sm] = i;
            if(am.find(sm) != am.end())ans = max(ans, i-am[sm]);
        }
        cout << ans << endl;
	}

	return 0;
}