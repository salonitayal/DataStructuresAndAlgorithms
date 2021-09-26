#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, m; cin>>n>>m; int a[n], b[n];
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++)cin>>b[i];

        // use the Heap

        make_heap(b, b+m, greater<int>()); // makes the min heap
        for(int i=0; i<n; i++)
        {
            // Pop minimum element from min_heap using 
            // pop_heap() STL function 
            // The pop_heap() function removes the minimum element from 
            // heap and moves it to the end of the container 
            // converted to heap and reduces heap size by 1 
            pop_heap(b, b + m, greater<int>()); 

            if(a[i] > b[m-1])swap(a[i], b[m-1]);

            // Apply push_heap() function on the container 
            // or array to again reorder it in the 
            // form of min_heap 
            push_heap(b, b + m, greater<int>()); 
        }
    // Convert the second array again into max_heap 
    // because sort_heap() on min heap sorts the array 
    // in decreasing order 
    // This step is [O(m)] 
    make_heap(b, b + m); // It's a max_heap 
  
    // Sort the second array using sort_heap() function 
    sort_heap(b, b + m); 
    for(int i=0; i<n; i++)cout << a[i]<< " ";
    for(int i=0; i<m; i++)cout << b[i]<< " ";
    cout<<endl;
    }
    return 0;
}