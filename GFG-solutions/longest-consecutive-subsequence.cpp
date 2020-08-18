#include <bits/stdc++.h>
using namespace std;

void unique(vector<int> &v){
  auto  ip = unique(v.begin(), v.end() );  
  v.resize(distance(v.begin(), ip)); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        sort(a.begin(),a.end());
        unique(a);
        int count=1;
        int max=1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]+1){
                count++;
                if(max<count)
                    max=count;
            }
            else
                count=1;
        }
        cout<<max<<endl;
    }
	return 0;
}