#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long int x; cin >> x; 

        int y, z, c=0;
        if(x >= 10)
        {
            for(int i = 0; i <= 10; i++)cout << i << " ";
        }
        for(long long int i = 12; i<= x; i++)
        {
            long long int j = i;
            while(i / 10 != 0)
            {
                y = i % 10;
                i = i / 10;
                z = i % 10;
                if(z + 1 == y || z - 1 == y)
                {
                    c = 1;
                }
                else 
                {
                    c = 0;
                    break; 
                }
            }
            i = j;
            if(c) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}