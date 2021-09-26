#include<iostream>
#include<algorithm>
using namespace std;
int cn=0;
int search(int a[], int x, int l, int r, int n)
{
    if(l>r)return -1;
    else if(l<=r)
    {
        int p = (l+r)/2;
        if(a[p] == x){return p;cn++;}
        else if(a[p] < x)
        {
            if(a[p] > a[n-1])
            {
                l=p+1; search(a, x, l, r, n);
            }
            else if(a[p] < a[n-1])
            {
                r=p-1; search(a, x, l, r, n);
            }
        }
        else if(a[p] > x)
        {
            if(a[p] > a[0])
            {
                l=p+1; search(a, x, l, r, n);
            }
            else if(a[p] < a[0])
            {
                r=p-1; search(a, x, l, r, n);
            }
        }
    }
}

int main()
{
    int t; cin >>t;
    while(t--)
    {
    int n, x; cin >> n; 
    int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    cout<< search(a, x, 0, n-1, n)<<endl;
    if(cn!=0)cout << -1 << endl;
    }
    return 0;
}


////////=========================================================================================================
////////====================================///////      Solution       ///////=======================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int helper(vector<int> &A,int k)
{
    int start=0;
    int end=A.size()-1;
    
    while(start<=end)
    {
        int mid=(end+start)/2;
        if(A[mid]==k)return mid;
        
        if(A[end]>=A[mid])
        {
            // if(A[end]==k)return end;
            if(A[mid]<k&&A[end]>=k)
            start=mid+1;
            else
            end=mid-1;
        }
        else if(A[start]<=A[mid])
        {
            if(k>=A[start]&&k<A[mid])
            end=mid-1;
            else
            start=mid+1;
        }
        
        
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> A(n);
	    for(int i=0;i<n;i++)cin>>A[i];
	    int k;
	    cin>>k;
	    
	    cout<<helper(A,k)<<endl;
	}
	return 0;
}