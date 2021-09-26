#include<bits/stdc++.h>
using namespace std;

int global_c;
int* allIndices(int a[], int i, int n, int req, int c)
{
    if(i==n)
    {
        static int x[100];
        return x;
    }
    if(a[i] == req)
    {
        global_c = c+1;
        int * ar  = allIndices(a, i+1, n, req, c+1);
        ar[c] = i;
        return ar;
    }
    else 
    {
        int* ar = allIndices(a, i+1, n, req, c);
        return ar;
    }
    
}

int main(){
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++)cin >> a[i];
    int req; cin >> req;
    int* ans_ptr = allIndices(a, 0, n, req, 0);
    for(int i=0; i<global_c; i++)
        cout << ans_ptr[i] << " ";

    cout << endl;
}
    