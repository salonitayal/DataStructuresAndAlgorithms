#include<iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], j, b[n];
        for(int i = 0; i < n; i++)cin >> a[i];
        int count[10];
        // set each element of count array to 0
        for(int i = 0; i < 10; i ++)count[i] = 0;
    
        // to record the count of element of an array
        for(int i = 0; i < n; i ++)
            ++count[a[i]];

        // making the modified array
        for(int i = 1; i < 10; i++)
            count[i] += count[i-1];       // count[i] = count[i]+count[i-1]
    
        // the counting part
        for(int i = 0; i < n; i++)
        {
            --count[a[i]];
            b[count[a[i]]] = a[i];
        }

        //copy array b into a
        for(int i = 0; i < n; i ++)a[i] = b[i] ;
        
        for(int i = 0; i < n; i ++)cout << a[i]<< " " ;
        cout << endl;
    }
    return 0;
}