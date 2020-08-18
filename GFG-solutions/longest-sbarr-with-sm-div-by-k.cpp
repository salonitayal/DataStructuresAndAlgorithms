#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        unordered_map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int sum = 0, index = 0, len = 0;

        for(int i=0; i<n; i++)
        {
            sum += a[i];

            int y = (sum % k + k) % k;

            if(y == 0)len = i+1;

            if(m.find(y) == m.end())m[y] = i;

            if(m.find(y) != m.end())
            {
                int index = i - m[y];
                len = max(len, index);
            }
        }
        cout << len << endl;
    }
    
    return 0;
}