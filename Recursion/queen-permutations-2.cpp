#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void queenPermutations(int qsf, int tb, int r, int c, string asf, int ssf, int ts, vector<int> queens)
{
    if(r == tb)
    {
        if(qsf == ts)
        {
            cout << asf << endl;
        }
        return;
    }
    int nr = 0, nc = 0;
    string sep;
    if(c == tb-1)  // almost reached the edge
    {
        nr = r+1;
        nc = 0;
        sep = '\n';
    }
    else
    {
        nr = r;
        nc = c+1;
        sep = '\t';
    }
    for(int i=0; i<queens.size(); i++)
    {
        if(queens[i] == 0)
        {
            queens[i] = 1;
            queenPermutations(qsf+1, tb, nr, nc, asf + 'q' + to_string(i+1) + sep, ssf+1, ts, queens);
            queens[i] = 0;
        }
    }
    queenPermutations(qsf, tb, nr, nc, asf + '-' + sep, ssf, ts, queens);
}
int main()
{
    int n, itms; cin >> n >> itms;
    vector<int> queens(itms);
    queenPermutations(0, n, 0, 0, "", 0, itms, queens);
    
    return 0;
}

