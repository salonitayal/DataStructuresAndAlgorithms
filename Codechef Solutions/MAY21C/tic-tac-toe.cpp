#include<bits/stdc++.h>
#define ll long long int
using namespace std;


bool grid_true(char p, char q, char r, char k)
{
    if(p==q && q==r && r == k && p != '_')
        return true;
    return false;
}
bool grid_canbe_true(char p, char q, char r)
{
    if((p == q && r == '_') || (q == r && p == '_') || (p == r && q == '_'))
        return true;
    return false;
}
//===========================================================================================

void top_left1(char p, char a[3][3], int& w1)
{
    if(grid_canbe_true(p, a[0][1], a[0][2]))++w1;
    if(grid_canbe_true(p, a[1][0], a[2][0]))++w1;
}
void in_the_middle1(char p, char a[3][3], int& w1)
{
    if(grid_canbe_true(p, a[0][1], a[2][1]))++w1;
    if(grid_canbe_true(p, a[1][0], a[1][2]))++w1;
    if(grid_canbe_true(p, a[0][0], a[2][2]))++w1;
    if(grid_canbe_true(p, a[2][0], a[0][2]))++w1;
}
void bottom_left1(char p, char a[3][3], int& w1)
{
    if(grid_canbe_true(p, a[1][2], a[0][2]))++w1;
    if(grid_canbe_true(p, a[2][0], a[2][1]))++w1;
}
//=============================================================================================

void top_left(char p, char a[3][3], int& w, char k)
{
    if(grid_true(p, a[0][1], a[0][2], k))++w;
    if(grid_true(p, a[1][0], a[2][0], k))++w;
}
void in_the_middle(char p, char a[3][3], int& w, char k)
{
    if(grid_true(p, a[0][1], a[2][1], k))++w;
    if(grid_true(p, a[1][0], a[1][2], k))++w;
    if(grid_true(p, a[0][0], a[2][2], k))++w;
    if(grid_true(p, a[2][0], a[0][2], k))++w;
}
void bottom_left(char p, char a[3][3], int& w, char k)
{
    if(grid_true(p, a[1][2], a[0][2], k))++w;
    if(grid_true(p, a[2][0], a[2][1], k))++w;
}
//==============================================================================================

void check1(char a[3][3], int& w, char k)
{
    top_left(a[0][0], a, w, k);
    in_the_middle(a[1][1], a, w, k);
    bottom_left(a[2][2], a, w, k);
}
void check2(char a[3][3], int& w1)
{
    top_left1(a[0][0], a, w1);
    in_the_middle1(a[1][1], a, w1);
    bottom_left1(a[2][2], a, w1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        char a[3][3];
        int x=0, o=0, w3=0;
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cin >> a[i][j];
                    if(a[i][j] == '_')++w3;
                    else if(a[i][j] == 'X')++x;
                    else ++o;
                }
            }

        int w=0, wx=0, wo=0, w1=0;                
        check1(a, wx, 'X');
        check1(a, wo, 'O');
        cout << wx << wo << endl;

        if((wo == 1 && wx ==1) || (o>x) || x-o>1 )cout << 3;
        else if(wo == 1 && wx == 0 && o == x)cout << 1;
        else if(wx == 1 && wo == 0 && o < x)cout << 1;
        else if(wx == 2 && w3 == 0)cout << 1;
        else if(wx==0 && wo == 0 && w3 == 0)cout << 1;
        else if(wx==0 && wo == 0 && w3 > 0)cout << 2;
        else cout << 3; 
        cout << endl;
    }
    return 0;
}