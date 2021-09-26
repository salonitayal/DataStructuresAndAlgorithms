#include<bits/stdc++.h>
using namespace std;

int lastIndex(int a[], int i, int n, int req)
{
    if(i==n)return -1;
    int liisa = lastIndex(a, i+1, n, req);

    if(liisa == -1)   // it shows that nobody from i+1 to n was able to find req element
    {
        if(a[i] == req)return i;
        else return -1;
    }
    else 
    {
        return liisa;
    }
}

int main(){
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++)cin >> a[i];
    int req; cin >> req;
    cout << lastIndex(a, 0, n, req) << endl;
}
