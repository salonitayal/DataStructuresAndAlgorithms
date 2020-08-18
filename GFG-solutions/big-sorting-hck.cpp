#include<bits/stdc++.h>
using namespace std;
bool comp(string s1, string s2)
{
    if(s1.length() == s2.length())
        return s1 < s2;
    return s1.length() < s2.length();
}
int main()
{
    int n; cin >> n;
    vector<string> s(n); for(int i=0; i<n; i++)cin >> s[i];

    sort(s.begin(), s.end(), comp);

    for(int i=0; i<n; i++)cout << s[i]<< endl;
    return 0;
}