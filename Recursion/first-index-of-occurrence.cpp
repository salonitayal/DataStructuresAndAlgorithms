#include<bits/stdc++.h>
using namespace std;

int firstIndex(int a[], int i, int n, int req)
{
    if(i==n)return -1;
    if(a[i] == req)return i;
    firstIndex(a, i+1, n, req);
}

int main(){
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++)cin >> a[i];
    int req; cin >> req;
    cout << firstIndex(a, 0, n, req) << endl;
}
