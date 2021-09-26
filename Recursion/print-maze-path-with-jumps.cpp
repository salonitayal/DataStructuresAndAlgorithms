#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// stupid call method : ke hmne call lgadi but we managed it in base cases

void printMazePathWithJUmps(int sx, int sy, int dx, int dy, string path)
{
    if(sx == dx && sy == dy)
    {
        cout << path << " ";
        return;
    }
    //if(sx > dy || sy > dy)return;     No need to use these as we have made smart calls
    for(int i=1; i<= dy-sy; i++)
        printMazePathWithJUmps(sx, sy+i, dx, dy, path +'h'+ to_string(i));
    
    for(int i=1; i<= dx-sx; i++)
        printMazePathWithJUmps(sx+i, sy, dx, dy, path +'v'+ to_string(i));

    for(int i=1; i<= dy-sy && i<= dx-sx; i++)
        printMazePathWithJUmps(sx+i, sy+i, dx, dy, path +'d'+ to_string(i));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        printMazePathWithJUmps(1, 1, n, n, "");
        cout << endl;
    }
    
    return 0;
}