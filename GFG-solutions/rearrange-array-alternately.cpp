//===========================             SOLVED THIS ON MY OWN                  ============================================================
// EXECUTION TIME: 0.45 SECS ===========        MEDIUM LEVEL       ====================================================    
//=============================            https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately/0/   ==================

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n];
        for(int i=0; i<n; i++)cin>>a[i];

        int x=n/2;
        for(int i=0; i<x; i++)
        {
            int j=n-1-i;
            cout << a[j]<< " " << a[i] << " ";
        }
        if(n%2!=0)cout << a[x];
        cout <<endl;
    }
    return 0;
}