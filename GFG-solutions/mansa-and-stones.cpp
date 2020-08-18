#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int x, y; cin >> x >> y;
        set <int> s;
        int cx = n-1, cy = 0;

        while(cx != 0 && cy != n-1)
        {
            int a = (x * cx) + (y * cy);
            s.insert(a);
            --cx;
            ++cy;
        }

        cy = n-1, cx = 0;

        while(cy != 0 && cx != n-1)
        {
            int a = (x * cx) + (y * cy);
            s.insert(a);
            --cy;
            ++cx;
        }
        for(auto i:s)cout << i << " ";
        cout << endl;
    }
    return 0;
}
