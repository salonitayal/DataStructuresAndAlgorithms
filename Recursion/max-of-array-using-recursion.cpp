#include<bits/stdc++.h>
using namespace std;

int displayMax(int a[], int i, int n)
{
    
    if(i==n)return a[i-1];
    int ans = max(displayMax(a, i+1, n), a[i]);  // max(returns max val from i+1 to n, ith value)

    return ans;
}

int main(){
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++)cin >> a[i];
    int x = displayMax(a, 0, n);
    cout << x << endl;
}
