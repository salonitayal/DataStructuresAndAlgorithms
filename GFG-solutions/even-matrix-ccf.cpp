#include<iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; 
        int a[n][n]; 
        int x = 0;

        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)
            {
                for(int j=0; j<n; j++)
                {
                    ++x;
                    a[i][j] = x;
                }
            }
            else 
            {
                for(int j=n-1; j>=0; j--)
                {
                    ++x;
                    a[i][j] = x;
                }
            }
        }

        for(int i=0; i<n; i++)
        {    for(int j=0; j<n; j++)
            {    
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}