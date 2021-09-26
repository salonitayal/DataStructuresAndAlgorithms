#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
void permute(string s, int l, int r)
{
    if(l == r)
        cout << s << " ";
    else
    {
        for(int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permute(s, l+1, r);
            swap(s[l], s[i]);
        }
    }
    
}

int main()
{
    string s; cin >> s;
    int l = s.length();
    permute(s, 0, l-1);
    return 0;
}