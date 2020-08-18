// ======================================            https://ide.geeksforgeeks.org/rvFP7Mh8KN          =================
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,twice=0,mis=0;
        cin>>n;
        int a[n+1]={0};
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(a[x]==n+1){
                twice=x;
            }
            else a[x]=n+1;
        }
        for(int i=1;i<=n;i++){
            if(a[i]!=n+1){
                mis=i;
                break;
            }
        }
        cout<<twice<<" "<<mis<<endl;
    }
	//code
	return 0;
}