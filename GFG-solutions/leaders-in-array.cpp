#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
   int t; cin >> t;
   while(t--){
   int n;cin >> n;int arr[n];

   for(int i = 0; i < n; i ++)cin >> arr[i];
   int max = arr[n-1];
   for(int i = 0; i < n; i ++)
   {
       int *x = max_element(arr + i, arr + n);
      
      if(arr[i] == *x)
      {
          cout << arr[i] << " ";
      }
     
   }cout << endl;
   }

    
   return 0;

}
    

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	       cin>>a[i];
	   int max=a[n-1];
	   for(int i=n-2;i>=0;i--)
	   {
	       if(a[i]>=max)
	          max=a[i];
	       else
	          a[i]=-1;
	   }
	   for(int i=0;i<n;i++)
	     if(a[i]!=-1)
	     cout<<a[i]<<" ";
	   cout<<endl;
	}
	return 0;
}
