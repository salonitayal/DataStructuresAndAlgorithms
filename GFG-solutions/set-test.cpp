#include<iostream>
#include<set>
using namespace std;

int main()
{
    int a[4];
    set<int> s;
    for(int i = 0; i < 4; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }cout << endl;
    auto it = next(s.begin(), 2);// accesing element by index in set
    cout << *it;
    return 0;
}

   /* int n;cin >> n;
    int a[n];
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }cout << endl;
    int k; cin >> k;
    for(int i = 0; i < k; i++)cout << s[k];
    for(auto x : s)cout << x<<  " ";
    return 0;
}*/