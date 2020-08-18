// WHAT THE FKKK!!! IT CLEARED THE TEST CASES I ONE TIME ONLY. SUBMITTED IT SUCCESSFULLY... HERES THE LINK
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m, n; cin>>m >>n;
        int i=m, c=0;
        if(m<=2)cout << 2 << " ";
        if(m%2==0) i=m+1;

        for(; i<n+1; i+=2)
        {
            int x=(i/2)+1;
            while(x>1)
            {
                if(i%x==0){c=0; break;}
                else {--x; ++c;}
            }
            if(c) cout << i << " ";
        }
        cout << endl;
	}
	return 0;
}