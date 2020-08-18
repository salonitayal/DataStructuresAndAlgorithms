#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int a[26] = {0};

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')continue;
        if(s[i] >= 97)
        {
            ++a[s[i] - 'a'];
        }
        else 
        {
            ++a[s[i] - 'A'];
        }
    }
    for(int i=0; i<26; i++)
        if(a[i] == 0)
            return "not pangram";
    return "pangram";
}

int main()
{
    string s;
    getline(cin, s);
    cout << pangrams(s);
}
