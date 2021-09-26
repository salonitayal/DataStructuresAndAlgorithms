#include<bits/stdc++.h>
using namespace std;

void display(int a[], int i, int n)
{
    if(i == n)return;
    cout << a[i] << " ";
    display(a, i+1, n);
}


int main(){
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++)cin >> a[i];
    display(a, 0, n);
}
