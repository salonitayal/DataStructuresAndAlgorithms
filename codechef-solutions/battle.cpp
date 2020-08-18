#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> x(203, vector<char>(203));

int comb(int n)
{
    if(n < 3)
        return 0;
    else
        return ((n * (n - 1) * (n - 2)) / 6);
}

int row_count(int i, int n)
{
    int count = 0;
    for(int j = 0; j < n; j++)
        if(x[i][j] != '.')
            count++;
    return count;
}

int col_count(int j, int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
        if(x[i][j] != '.')
            count++;
    return count;
}

int upp_diag_count(int i, int j, int n)
{
    int count = 0;
    for(int a = i, b = j; a < n && b < n; a++, b++)
        if(x[a][b] != '.')
            count++;
    return count;
}

int low_diag_count(int i, int j, int n)
{
    int count = 0;
    for(int a = i, b = j; a >= 0 && b < n ; a--, b++)
        if(x[a][b] != '.')
            count++;
    return count;
}

int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    for(int i = 0; i < n; i++)
	        for(int j = 0; j < n; j++)
	            cin >> x[i][j];
	            
	   long long int ans = 0;
	   for(int i = 0; i < n; i++)
	   {
	       ans  = ans + comb(row_count(i, n));
	       ans  = ans + comb(upp_diag_count(i, 0, n));
	       ans = ans + comb(low_diag_count(i, 0, n));
	   }
	       
	   for(int j = 0; j < n; j++)
	   {
	        ans = ans + comb(col_count(j, n));
	        if(j)
	        ans = ans + comb(upp_diag_count(0, j, n));
	        if(j)
	            ans = ans + comb(low_diag_count(n - 1, j, n));
	   }     
	   cout << ans << endl;
	}
	return 0;
}