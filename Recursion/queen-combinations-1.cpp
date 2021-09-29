#include<bits/stdc++.h>
using namespace std;

void queenCombinations(int cnt, int itm, int r, int c, vector<vector<char>> x)
{
    if(cnt == itm)
    {
        for(int i=0; i<x.size(); i++)
        {
            for(int j=0; j<x[0].size(); j++)
            {
                cout << x[i][j];
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    for(int i=0; i<x.size(); i++)
    {
        for(int j=0; j<x[0].size(); j++)
        {
            if(x[i][j]=='-')
            {
                x[i][j] = 'q';
                queenCombinations(cnt+1, itm, i, j, x);
                x[i][j] = '-';
            }
        }
    }

}
// int cnt=0;
// void queenCombinations(int q, int n, int row, int col, string x) //without matrix
// {
//     if(row == n)
//     {
//         if(q == n)
//         {
//             cout << x;
//             return;
//         }
  
//     }
//     int new_r=0;
//     int new_c=0;
//     string yes_q="";
//     string no_q="";

//     if(col == n-1)
//     {
//         new_c = 0;
//         new_r = row+1;
//         yes_q = x + "q\n";
//         no_q = x + "-\n";
//     }
//     else
//     {
//         new_c = col+1;
//         new_r = row;
//         yes_q = x + "q";
//         no_q = x + "-";
//     }
//     queenCombinations(q+1, n, new_r, new_c, yes_q);
//     queenCombinations(q, n, new_r, new_c, no_q);
    
// }
int main()
{
    int n, itm; cin >> n >> itm;
    vector<vector<char>> x(n, vector<char>(n));
    for(int i=0; i<n; i++)
        {for(int j=0; j<n; j++)
            x[i][j] = '-';}

    queenCombinations(0, itm, 0, 0, x);
    
    
    return 0;
}

