#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s; 
    int q; cin >> q;
    int queries[q]; for(int i=0; i<q; i++)cin >> queries[i];

    set<int> st;
    int sm = 0;
    for(int i=0; s[i]; i++)
    {
        sm += s[i] - 96; 
        st.insert(sm);
        if(s[i] != s[i+1])sm = 0;
    }
    for(int i=0; i<q; i++)
    {
        if(st.find(queries[i]) != st.end())
            cout << "Yes" << endl;
        else cout << "No" << endl;
            
    }
    return 0;
}