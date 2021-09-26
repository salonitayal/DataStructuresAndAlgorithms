#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printStairsPath(int n, string path)
{
    if(n==0)
    {
        cout << path << " ";
        return;
    }
    if(n<0)return;
    printStairsPath(n-1, path +'1');
    printStairsPath(n-2, path +'2');
    printStairsPath(n-3, path +'3');

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        printStairsPath(n, "");
    }
    
    return 0;
}