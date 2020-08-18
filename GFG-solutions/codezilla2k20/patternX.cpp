#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x=1; cin>>n;
    for(int i=1; i<n-1; i++)x+=2;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)cout << " ";
        cout << i;
        for(int j=0; j<x; j++)cout << " ";
        x-=2;
        if(i<n)cout << i << endl;
    }
    cout << endl;
    x=1;
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<i; j++)cout << " ";
        cout << i; 
        for(int i=0; i<x; i++)cout << " ";
        x+=2;
        cout << i << endl;
    }
    return 0;
}
