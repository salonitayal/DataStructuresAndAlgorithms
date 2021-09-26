#include<bits/stdc++.h>
using namespace std;

void floodfill(vector<vector<int>> a, int row, int col, string psf, vector<vector<int>> visited)
{
    if(row < 0 || col < 0 || row > a.size()-1 || col > a[0].size()-1 || a[row][col]==1 || visited[row][col] != 0)return;
    if(row == a.size()-1 && col == a[0].size()-1)
    {
        cout << psf << " ";
        return;
    }
    visited[row][col] = 1;
    floodfill(a, row-1, col, psf + 't', visited);
    floodfill(a, row+1, col, psf + 'd', visited);
    floodfill(a, row, col-1, psf + 'l', visited);
    floodfill(a, row, col+1, psf + 'r', visited);
    visited[row][col] = 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m)), visited(n, vector<int> (m)); 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
            
        }
    }
    floodfill(a, 0, 0, "", visited);
    return 0;
}