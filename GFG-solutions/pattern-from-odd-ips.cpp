#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>> n;

    int x = n/2 +1;
    for(int i=1; i<=x; i++)
    {
        for(int j = x-i; j > 0; j--)cout << " ";

        for(int j = i; j > 0; j--)cout << j;

        for(int j = 1; j < i-1; j++)cout << " ";

        if(i>1)
            for(int j = 1; j <= i; j++)cout << j;
        cout << endl;
    }
    for(int i = x-1; i>0; i--)
    {
        for(int j = 1; j <= x-i; j++)cout << " ";

        for(int j = i; j > 0; j--)cout << j;

        for(int j = x-1-i; j < (x-1)/2; j++)cout << " ";
        
        if(i > 1)
            for(int j = 1; j <= i; j++)cout << j;

        cout << endl;
    }
    return 0;
}