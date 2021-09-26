#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void queenCombinations(int q, int n, int row, int col, string x) //without matrix
{
    if(row == n)
    {
        if(q == n)
        {
            cout << x;
            return;
        }
  
    }
    int new_r=0;
    int new_c=0;
    string yes_q="";
    string no_q="";

    if(col == n-1)
    {
        new_c = 0;
        new_r = row+1;
        yes_q = x + "q\n";
        no_q = x + "-\n";
    }
    else
    {
        new_c = col+1;
        new_r = row;
        yes_q = x + "q";
        no_q = x + "-";
    }
    queenCombinations(q+1, n, new_r, new_c, yes_q);
    queenCombinations(q, n, new_r, new_c, no_q);
    
}
int main()
{
    int n, itm; cin >> n >> itm;
    string x="";
    for(int i=0; i<n; i++)x += "_";
    queenCombinations(0, n, 0, 0, "");
    
    return 0;
}

