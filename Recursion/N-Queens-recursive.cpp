#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isItSafeForQueen(vector<vector<int>> v, int row, int col)
{
    // Check for upar ka rasta
    for(int i=row-1, j=col; i>=0 && j>=0; i--, j--)
        if(v[i][j] == 1)
            return false;

    // Check for left upar ka rasta
    for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--)
        if(v[i][j] == 1)
            return false;

    // Check for right upar ka rasta
    for(int i=row-1, j=col+1; i>=0 && j<v.size(); i--, j++)
        if(v[i][j] == 1)
            return false;

    return true; // if none of the above works return true its in safe place
}

void printQueens(vector<vector<int>> v, int row, string qsf)
{
    if(row == v.size())
    {
        cout << qsf << endl;
        return;
    }
    for(int col=0; col<v.size(); col++)
    {
        if(isItSafeForQueen(v, row, col))
        {
            v[row][col] = 1;
            printQueens(v, row+1, qsf + to_string(row) + to_string(col) + "-");
            v[row][col] = 0;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    printQueens(v, 0, "");
    
    return 0;
}