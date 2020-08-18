#include<iostream>
using namespace std;


int main()
{
    int t; cin >>t;
    while(t--)
    {
    int n; cin >> n;
    int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    int b[n]; for(int i = 0; i < n; i++) cin >> b[i];
    int c[n+1];
    
    int i=0, j=0, k=0;
    while(i < n+1)
    {
        if(a[j] <= b[k])
        {
            c[i] = a[j]; ++j;
        }
        else if(b[k] < a[j])
        {
            c[i] = b[k]; ++k;
        }
        ++i;
    }
    int n1=sizeof(c)/sizeof(c[0]);
    cout << c[n1-2] +c[n1-1]<<endl;
    }
    return 0;
}