#include <bits/stdc++.h>
using namespace std;

int ans = 0, mx=-1;
void solve(vector<vector<char>>& a, vector<vector<int>>& b, int r, int c)
{
    if(r>=a.size() || c>=a[0].size() || r<0 || c<0 ||  a[r][c]=='0')return;
   
      // check for adjacents
                
    ++ans;
    a[r][c] = '0';
    solve(a, b, r-1, c+1);
    solve(a, b, r, c+1);
    solve(a, b, r+1, c+1);
    solve(a, b, r+1, c);
    solve(a, b, r+1, c-1);
    solve(a, b, r, c-1);
    solve(a, b, r-1, c-1);
    solve(a, b, r-1, c);
}
int main() {
	//code
	int t; cin >> t;
	while(t--)
	{
	    int n, m; cin >> n >> m;
	    vector<vector<char>> a(n, vector<char>(m));
	    vector<vector<int>> b(n, vector<int>(m));
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
            {
                cin >> a[i][j];
            }
	    }
	    //int res = solve(a, b, 0, 0);
	    for(int i=0; i<a.size(); i++)
        {
            for(int j=0; j<a[0].size(); j++)
            {
                ans = 0;
                if(a[i][j] == '1')solve(a, b, i, j);
                mx = max(mx, ans);
            }
        }
	   cout << mx << endl;
	}
	return 0;
}