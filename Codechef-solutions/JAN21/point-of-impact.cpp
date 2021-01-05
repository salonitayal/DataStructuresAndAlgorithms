#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k, x, y; cin >> n >> k >> x >> y;

        if(x == y)
        {
            x = n;
            y = n;
        }
        else
        {
            if(k > n)
            {
                k %= 5;
                ++k;
            }
            int i = 0;
            if(i < k)
            {
                int d = abs(x-y);
                if(i == 1 || k == n)
                {
                    if(x > y)
                    {
                        x = n;
                        y = n - d;
                    }
                    else
                    {
                        y = n;
                        x = n - d;
                    }
                    if(k == n)i = n+1;
                }
                ++i;
                if(i < k)
                {
                    swap(x, y);
                    ++i;
                    if(i < k)
                    {
                        int e = abs(x - y);
                        if(x > y)
                        {
                            x  = e;
                            y = 0;
                        }
                        else
                        {
                            y = e;
                            x = 0;
                        }
                        ++i;
                        if(i < k)
                        {
                            swap(x, y);
                        }
                        
                    }
                }
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}