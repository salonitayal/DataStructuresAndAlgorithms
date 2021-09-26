#include<bits/stdc++.h>
using namespace std;

void display(int a[], int i, int n)
{
    if(i == n)return;
    display(a, i+1, n);     // displays element from i+1 to n, thats our faith    
    cout << a[i] << " ";    // displays (i)th element
}


int main(){
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++)cin >> a[i];
    display(a, 0, n);
}
