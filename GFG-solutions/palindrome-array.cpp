#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)cin >> v[i];
        
        int count = 0;
        int i=0, j=n-1;
        while(i < j)
        {
            if(v[i] < v[j])
            {
                v[i+1] += v[i];
                ++i;
                ++count;
            }
            else if(v[j] < v[i])
            {
                v[j-1] += v[j];
                --j;
                ++count;
            }
            else 
            {
                ++i;
                --j;
            }
        }
        cout << count << endl;

    }
}