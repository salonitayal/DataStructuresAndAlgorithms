#include<bits/stdc++.h>
using namespace std;
int findExtra(int a[],int b[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n-1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
		cout<<findExtra(a,b,n)<<endl;
	}
}
//======================================================================================================================================
//======================================================================================================================================
// USING BINARY SEARCH APPROACH
int x = 0;
int findExtra(int a[],int b[],int n)
{
    x = (x + n)/2;
    if(a[x] == b[x])
    {
        ++x; findExtra(a, b, n);
    }
    else
    {
        while(a[x] < b[x])--x;
        return x+1;
    }
    
}

// USING SIMPLE APPROACH
int findExtra(int a[],int b[],int n)
{
    for(int i=0;i<n;i++) {
        if(a[i]!=b[i]){ return i; break;} 
        
    } 
}