#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
void printMatrixDiagonal(int mat[MAX][MAX], int );
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
       
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
      printMatrixDiagonal(a,n);
      cout<<endl;
        
       
    }
}

/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this method */
void printMatrixDiagonal(int mat[MAX][MAX], int n)
{
    int i = 0, j = 0;
    bool isUp = true;

    for(int k = 0; k < n*n; )
    {
        if(isUp)
        {
            for(; i >= 0 && j < n; i--, j++)
            {
                cout << mat[i][j] << " ";
                k++;
            }
            if(i < 0 && j <= n-1)i = 0;
            if(j == n)i += 2, j--;
        }
        else
        {
            for(; j >= 0 && i < n; j--, i++)
            {
                cout << mat[i][j] << " ";
                k++;
            }
            if(j < 0 && i <= n-1)j = 0;
            if(i == n)j += 2, i--;
            
        }
        isUp = !isUp;
    }
}
