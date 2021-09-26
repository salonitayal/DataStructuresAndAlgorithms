#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void displayBoard(vector<vector<int>> a)
{
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<a[0].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void knightTour(vector<vector<int>> a, int r, int c, int move)
{
    if(r < 0 || c < 0 || r >= a.size() || c >= a.size() || a[r][c] != 0)
        return;
    else if(move == a.size() * a.size())
    {
        a[r][c] = move;
        displayBoard(a);
        a[r][c] = 0;
        return;
    }

    // All moves a knight can take from a point
    a[r][c] = move;
    knightTour(a, r-2, c+1, move+1);
    knightTour(a, r-1, c+2, move+1);
    knightTour(a, r+1, c+2, move+1);
    knightTour(a, r+2, c+1, move+1);
    knightTour(a, r+2, c-1, move+1);
    knightTour(a, r+1, c-2, move+1);
    knightTour(a, r-1, c-2, move+1);
    knightTour(a, r-2, c-1, move+1);
    a[r][c] = 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, r, c; cin >> n >> r >> c;
    vector<vector<int>>a(n, vector<int>(n));
    knightTour(a, r, c, 1);
    
    return 0;
}