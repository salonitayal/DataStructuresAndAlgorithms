#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	{
	    int n, m; cin >> n >> m;
	    int a[n], b[m];
	    int sm1=0, sm2=0, r=0;
	    priority_queue <int> pq;
	    
	    for(int i=0; i<n; i++)
	    {cin >> a[i]; sm1 += a[i];}
	    
	    for(int i=0; i<m; i++)
	    {
	        cin >> b[i]; sm2 += b[i];
	        pq.push(b[i]);
	    }
	    int i=0;
	    sort(a, a+n);
	    
	    if(sm1 > sm2)cout << r << endl;
	    else
	    {
	        while(i < n)
			{
				int tmp2 = pq.top();
				
				int tmp = a[i];
				a[i] = pq.top();
				pq.pop();
				pq.push(tmp);
				
				sm2 = sm2 - tmp2 + tmp;
				sm1 = sm1 - tmp + tmp2; 
				
				if(sm1 <= sm2){++r; ++i;}
				else break;
	        }
	        if(sm1 > sm2)cout << r+1 << endl;
	        else cout << -1 << endl;
	    }
	}
	return 0;
}
