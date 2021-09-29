#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void queenPermutations(int n, vector<vector<int>> b)
{
    if(cnt == n)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(b[i][j]==0)cout << '-' << "\t";
                else cout << 'q' << b[i][j] << "\t";
            }cout << endl;
        }
        cout << endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i][j]==0)
            {
                /*
                    alternatively I could have used :
                    b[i][j]=cnt;
                    queenpermutations(n, b, cnt+1); then there would not be need to reduce cnt after that.
                    
                */
                ++cnt;     
                b[i][j] = cnt;
                queenPermutations(n, b);
                b[i][j] = 0;
                --cnt;
            }
        }
    }
}
int main()
{
    int n; cin >> n;
    vector<vector<int>> board(n, vector<int> (n));
    queenPermutations(n, board);
    
    return 0;
}

