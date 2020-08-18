#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<32;i++){
	        v.push_back(n%2);
	        n=n/2;
	    }
	    unsigned long ans=0;
	    for(int i=0;i<32;i++){
	       if(v[i]){
	           ans+=pow(2,31-i);
	       }
	    }
	    cout<<ans<<endl;
	    v.clear();
	}
	return 0;
}