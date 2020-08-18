// SOLVED ON MY OWN 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    string a[n], b;

    cin >> b;

    for(int i=0; i<n; i++)
        cin >> a[i];

    int j=0, c=0, max=0, s=0, t=0, i; 
    while(j < n)
    {
        c = 0;
        for(i=0; i<m; i++)
        {
            if(b[i] == a[j][i]) ++c;
        }
        if(max < c)
        {
            max = c; 
            s = j; 
            t = i;
        }
        j++;
    }

    for(int i=0; i<t; i++) cout << a[s][i];
    cout << endl;
    return 0;
}