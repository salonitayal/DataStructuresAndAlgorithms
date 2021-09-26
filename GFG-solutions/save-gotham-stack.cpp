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

        int s = 0;
        stack<int> st;
        for(int i=0; i<n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                st.push(a[i]);
            }
            else 
            {
                s += a[i + 1];
                //int x = st.top();
                while((!st.empty()) && (st.top() < a[i + 1]))
                {
                    s += a[i + 1];
                    st.pop();
                }
            }
        }
        s %= 1000000001;
        cout << s << endl;
    }
    return 0;
}