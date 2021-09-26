#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
            cin>>arr[i];
            
        int great[n];
        int small[n];
        
        great[0] = arr[0];
        for(int i=1;i<n;i++)
            great[i] = max(great[i-1],arr[i]);

            
        small[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--)
            small[i] = min(small[i+1],arr[i]);
            
        int res = -1;
        for(int i=1;i<n-1;i++){
            if(great[i] == small[i]){
                res = great[i];
                break;
            }
        }
        cout<<res<<endl;
	}
	return 0;
}