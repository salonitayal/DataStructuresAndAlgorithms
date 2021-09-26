#include<bits/stdc++.h>
using namespace std;

bool mycomp(string x, string y)
{
    //string xy = x.append(y);
    //string yx = y.append(x);
    //cout << x << " comp " << y << endl;
    return x+y > y+x;
}
int main()
{
    int t; cin>>t;
    while(t--){

    int n; cin>> n; //string x;
    vector<string> v(n);
    for(int i=0; i<n; i++)
    {
        //cin>>x; 
        cin >>v[i];
    }
    sort(v.begin(), v.end(), mycomp); // pass comparator selfmade fncn as arg
    for(int i=0; i<v.size(); i++)
        cout << v[i];
    cout << endl;
        
    }
    return 0;
}