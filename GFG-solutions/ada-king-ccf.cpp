#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        int k; cin >> k;
        char a[10][10];

        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(k > 1)
                {
                    a[i][j] = '1';
                    k--;
                    i2 = i;
                }
                else if(k == 1)
                {
                    a[i][j] = 'O';
                    k--;
                    i2 = i;
                }
                else if(k == 0)
                {
                    if(a[i][j-1] == 'O')
                        a[i][j] = 'X';
                    else if(i != 0 && (a[i-1][j] == '1' || a[i-1][j] == 'O'))
                        a[i][j] = 'X';
                    else if(i != 0 && a[i-1][j-1] == 'O')
                        a[i][j] = 'X';
                    else //if(a[i][j-1] == '.' || a[i][j-1] == 'X')
                        a[i][j] = '.';
                }
            }
        }
        for(int i=0; i<8; i++)
        {   
            for(int j=0; j<8; j++) 
            {
                if(a[i][j] == '1')cout << '.';
                else cout << a[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}