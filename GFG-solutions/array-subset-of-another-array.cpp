//      =========================   solved    ===================
#include <iostream>
#include <map>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n, m; cin >> n >> m;
	    int a[n], b[m];
	    map<int, int> mp;
	    for(int i=0; i<n; i++)
	    {
	        cin >> a[i];
	        ++mp[a[i]];
	    }
	    for(int i=0; i<m; i++)cin >> b[i];
	    int c=0;
	    for(int i=0; i<m; i++)
	    {
	        if(mp.find(b[i]) == mp.end())
	        {
	            cout <<"No"<< endl;  c=0;
	            break;
	        }
	        else c++;
	    }
	    if(c) cout << "Yes" << endl;
	}
	return 0;
}

// CAN USE THE VECTOR INSTEAD

// sort(v1.begin(),v1.end());
// sort(v2.begin(),v2.end());
// if(includes(v1.begin(),v1.end(),v2.begin(),v2.end()))