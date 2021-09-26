#include<bits/stdc++.h>
using namespace std;

// Return the index which contains V in array a[]
int binary_search(int a[], int n, int v)
{
    int lo = 0, hi = n-1;
    while(hi-lo>1)
    {
        int mid = (lo + hi)/2;

        if(a[mid] == v)
            return mid;
        if(a[mid] > v)
            hi = mid - 1;
        else 
            lo = mid + 1;
    }
    if(a[lo] == v)return lo;
    if(a[hi] == v)return hi;

    return -1;
}

int main()
{
    int n; 
    // cout << "Enter the size of an array: " ; 
    cin >> n;
    int a[n]; 
    // cout << "Enter the elements of array: "; 
    for(int i=0; i<n; i++)cin >> a[i];
    // cout << "Enter the element you wanna search: ";
    int v; cin >> v;
    cout << binary_search(a, n, v);
}