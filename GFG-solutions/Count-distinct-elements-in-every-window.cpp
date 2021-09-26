#include <iostream>
#include<set>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
        cout << endl;
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete below method */
void countDistinct(int A[], int k, int n)
{
    int count , num;
    for(int i = 0; i <= n - k; i ++)
    {
        count = k;
        for(int j = i + 1; j < i + k; j ++)
        {
            num = A[i];
            
            if(num == A[j])
            {
                --count;
            }
        }
        cout << count << " ";
    }
}
// ALTERNATIVE
void countDistinct(int A[], int k, int n)
{

    for(int i=0;i<=n-k;i++)
        {
            set<int> s(A+i,A+k+i);                                  //copy the array to set
            
                cout<<s.size()<<" ";                               //print the size
 
        }
}