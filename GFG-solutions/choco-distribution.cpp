#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
int min = INT32_MAX;
using namespace std;
int main(){
    vector<int> v;
    int t;
    cin >> t;
    int n;
    cin >> n;
    int n1 = n;
    while(t--)
    {
        int x;
        while(n-- && cin >> x)
        {
            v.push_back(x);
        }
    
        sort(v.begin(), v.end());
        int m; cin >> m;
        
        set<int> v2;
        int i = 0;
        int y;
        while(i <= n1-m)
        {

            y = v[i += (m-1)] - v[i];
            ++ i;
            v2.insert(y);
        }
        auto z = v2.begin() ;
        cout << *z << endl;
    }
       for(int i=0;i<=n-m;i++)
	    {
	        if(a[i+m-1]-a[i]<min)
	        min=a[i+m-1]-a[i];
	    }
	    cout<<min<<endl;

    
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- >0)
	{
	    int n,m,min=INT_MAX;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    cin>>m;
	    for(int i=0;i<=n-m;i++)
	    {
	        if(a[i+m-1]-a[i]<min)
	        min=a[i+m-1]-a[i];
	    }
	    cout<<min<<endl;
	}
	return 0;
}
}
*/