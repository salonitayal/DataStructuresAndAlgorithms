#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v[8] = {0,1,2,2,3,0,4,2};
    int x = 2;
    int c=0;
        for(int i=0; i<8; i++)
        {
            if(v[i] != x)
            {
                v[c] = v[i];
                ++c;
            }
        }
        cout << c << endl;
        for(int i=0; i<c; i++)cout << v[i] << " ";

}