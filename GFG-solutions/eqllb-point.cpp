#include<iostream>
#include<numeric>
using namespace std;

int main()
{
   int t;cin >> t;
   while(t--){
   int n; cin >> n;
    int a[n];
    int s1 = 0;
    int  s2 = 0;
    int count = 0;
    
    for(int i = 0; i < n; i++)cin >> a[i];

    cout << "\n";
    for(int i = 0; i < n; i ++)
    {
        s1 = 0;
        s2 = 0;
        s1 = accumulate(a, a + i, s1);
        s2 = accumulate(a + i + 1, a + n, s2);
        
        if(s1 == s2)
        {
            cout <<"point: "<< i+1;
        }
        else if(s1 != s2)
        {
            ++count;
        }
    }
    if(count == n)cout << -1;
    

   }
        
    return 0;
}

// ===========================================================================================================================
// ===========================================================================================================================
// CODE WITH BETTER COMPLEXITY USED PREFIX SUM ARRAY https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/
#include <iostream>
using namespace std;

int equi (int a[],int n,int sum)
{
    int sum_left=0;
    for(int i=0;i<n;i++)
    {
       
        sum=sum-a[i];
        if(sum==sum_left)
        {
            return(i+1);
        }
         sum_left=sum_left+a[i];
        
    }
    return(-1);
}

int main()
{
    int t;
    cin>>t;
	while(t--)
	{
	    
	    int i,n,sum=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    cout<<equi(a,n,sum)<<endl;
	}//code
	return 0;
}