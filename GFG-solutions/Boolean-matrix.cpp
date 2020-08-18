// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin >>t;
// 	while(t--)
// 	{
// 	    int n, m; cin >> m >> n;
// 	    int a[m+1][n+1];
// 	    int b[m];
// 	    for(int i=0; i<m; i++)b[i] = -1;
	    
// 	    for(int i=0; i<m; i++)
// 	    {
// 	        for(int j=0; j<n; j++)
// 	        {
// 	            cin >> a[i][j];
// 	            if(a[i][j] == 1)b[i] = j;
// 	        }
// 	    }
	    
// 	    for(int i=0; i<m; i++)
// 	    {
// 	        if(b[i] != -1)
// 	            for(int j=0; j<n; j++) a[i][j] = 1;
// 	    }

//         for(int i=0; i<m; i++)
// 	    {
// 	        if(b[i] != -1)
// 	            for(int k=0; k<m; k++) a[k][b[i]] = 1;
// 	    }
// 	    for(int i=0; i<m; i++)
// 	    {
// 	        for(int j=0; j<n; j++)
// 	        {
// 	            cout << a[i][j] << " ";    
// 	        }
// 	        cout << endl;
// 	    }
	            
// 	    cout << endl;
// 	}
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >>t;
	while(t--)
	{
	    int R, C; cin >> R >> C;
	    int mat[R][C];
        int m = R, n = C;
	    
	    for(int i=0; i<m; i++)
	         for(int j=0; j<n; j++)
	            cin >> mat[i][j];
	    
	    // variables to check if there are any 1 
    // in first row and column 
    bool row_flag = false; 
    bool col_flag = false; 
  
    // updating the first row and col if 1 
    // is encountered 
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) { 
            if (i == 0 && mat[i][j] == 1) 
                row_flag = true; 
  
            if (j == 0 && mat[i][j] == 1) 
                col_flag = true; 
  
            if (mat[i][j] == 1) { 
  
                mat[0][j] = 1; 
                mat[i][0] = 1; 
            } 
        } 
    } 
  
    // Modify the input matrix mat[] using the 
    // first row and first column of Matrix mat 
    for (int i = 1; i < R; i++) { 
        for (int j = 1; j < C; j++) { 
  
            if (mat[0][j] == 1 || mat[i][0] == 1) { 
                mat[i][j] = 1; 
            } 
        } 
    } 
  
    // modify first row if there was any 1 
    if (row_flag == true) { 
        for (int i = 0; i < C; i++) { 
            mat[0][i] = 1; 
        } 
    } 
  
    // modify first col if there was any 1 
    if (col_flag == true) { 
        for (int i = 0; i < R; i++) { 
            mat[i][0] = 1; 
        } 
    } 
	    for(int i=0; i<m; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            cout << mat[i][j] << " ";    
	        }
	        cout << endl;
	    }
	            
	    cout << endl;
	}
	return 0;
}