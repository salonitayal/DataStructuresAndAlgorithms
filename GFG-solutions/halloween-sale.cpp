#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, d, m, s; cin >> p >> d >> m >> s;
    int sm = p, c = 0;

    while(sm <= s && p >= m)
    {
        if(p-d < m || p == m)p = m;
        else p -= d;

        ++c;
        sm += p;
    }
    cout << c;
    cout << endl;
    return 0;
}