#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool grid_true(char p, char q, char r)
{
    if(p^q == 0 && q^r == 0)
        return true;
    return false;
}
void top_left(char p, char a[3][3], int& w)
{
    if(grid_true(p, a[0][1], a[0][2]))++w;
    if(grid_true(p, a[1][0], a[2][0]))++w;
}
void in_the_middle(char p, char a[3][3], int& w)
{
    if(grid_true(p, a[0][1], a[2][1]))++w;
    if(grid_true(p, a[1][0], a[1][2]))++w;
    if(grid_true(p, a[0][0], a[2][2]))++w;
    if(grid_true(p, a[2][0], a[0][2]))++w;
}
void bottom_left(char p, char a[3][3], int& w)
{
    if(grid_true(p, a[1][2], a[0][2]))++w;
    if(grid_true(p, a[2][0], a[2][1]))++w;
}
int check1(char a[3][3], int w)
{
    top_left(a[0][0], a, w);
    in_the_middle(a[1][1], a, w);
    bottom_left(a[2][2], a, w);
    return w;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        char a[3][3];
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                cin >> a[i][j];
                
        cout << check1(a, 0);
    }
    return 0;
}