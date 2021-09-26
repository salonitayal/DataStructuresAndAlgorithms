#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// stupid call method : ke hmne call lgadi but we managed it in base cases

void printMazePath(int sx, int sy, int dx, int dy, string path)
{
    if(sx == dx && sy == dy)
    {
        cout << path << " ";
        return;
    }
    if(sx > dy || sy > dy)return;
    printMazePath(sx, sy+1, dx, dy, path +'h');
    printMazePath(sx+1, sy, dx, dy, path +'v');
}


void printMazePath_smartcall(int sx, int sy, int dx, int dy, string path)
{
    if(sx == dx && sy == dy)
    {
        cout << path << " ";
        return;
    }

    if(sy < dy)
        printMazePath_smartcall(sx, sy+1, dx, dy, path +'h');
    if(sx < dy)
        printMazePath_smartcall(sx+1, sy, dx, dy, path +'v');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        printMazePath(1, 1, n, n, "");
        cout << endl;
        printMazePath_smartcall(1, 1, n, n, "");
    }
    
    return 0;
}