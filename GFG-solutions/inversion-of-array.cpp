#include <iostream>
using namespace std;

long merge(int a[], int left[], int right[], int n1, int n2)
{
    int i=0, j=0, count=0;
    while(i < n1 || j < n2)
    {
        if(i == n1)
        {
            a[i+j] = right[j];
            j++;
        }
        else if(j == n2)
        {
            a[i+j] = left[i];
            i++;
        }
        else if(left[i] <= right[j])
        {
            a[i+j] = left[i];
            i++;
        }
        else 
        {
            a[i+j] = right[j];
            count += n1 - i;
            j++;
        }
    }
    return count;
}
long incount(int a[], int n)
{
    if(n < 2) return 0;
    
    int mid = n/2;
    int left[mid];
    int right[n - mid];
    
    for(int i=0; i<mid; i++) left[i] = a[i];
    
    for(int i=mid; i<n; i++) right[i-mid] = a[i];
    
    return incount(left, mid) + incount(right, n-mid) + merge(a, left, right, mid, n-mid);
}
int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    int a[n]; 
	    for(int i=0; i<n; i++)cin >> a[i];
	    
	    cout << incount(a, n) << endl;
	}
	return 0;
}