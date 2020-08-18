#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
    
            int n;
            cin>>n;
            
            int arr[n];
            
            
            for(int i=0;i<n;i++)
            cin>>arr[i];
            
            if(n==1){
            cout<<arr[0]<<"\n";
            continue;}
            
            int ans;
            
            if(n%2==0)
             ans=(n-2)/4 +1;
            else
            ans=(n-3)/4 +2;
            
            cout<<arr[ans]<<"\n";
            
        
    }
    
	return 0;
}