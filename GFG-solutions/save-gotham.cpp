#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int j = 1, s = 0;
        for(int i=0; i<n; )
        {
            if((a[i] < a[j]) && (j < n))
            {
                s += a[j];
                i++; 
                j = i + 1;
            }
            else j++;
            if(j >= n)break;
        } 
        s %= 1000000001;
        cout << s << endl;
    }
}