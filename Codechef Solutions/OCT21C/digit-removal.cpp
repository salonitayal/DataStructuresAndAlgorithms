#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;

void solved0(string s)
{
    string res="";
    int idx=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '0')
        {
            idx = i;
            break;
        }
    }
    for(int i=idx; i<s.length(); i++)
    {
        if(s[i] == '0')res+='1';
        else res+='0';
    }
    int ans = stoi(res);
    cout << ans << endl;
}
void solve()
{
    int n, d; cin >> n >> d;
    string s;
    s = to_string(n);
    vector<int> v;
    int cnt=0;
    for(int i=0; s[i]; i++)
    {
        if(s[i] == d+'0')v.push_back(i);
        if(s[i] == '0')++cnt;
    }
        
    if(v.size()==0)
    {
        cout << 0;
        return;
    }
    if(cnt == s.length()-1-v[0] && d != 0)         // handles 4000000000 4
    {
        string x = "1";
        for(int i=0; i<cnt; i++)x+="0";
        int ans = stoi(x);
        cout << ans;
        return;
    }
    if(d==0)
    {
        solved0(s);
        return;
    }
    int idx = v[0], f=1, carry=0;
    string res="";
    for(int i=s.length()-1; i>idx; i--)
    {
        if(f)
        {
            if(s[i]!='0')
            {
                int tmp = 10 - (s[i]-'0');
                res = tmp + '0';
                carry = 1;
            }
            else
            {
                res = "0";
            }
            f=0;
        }
        else
        {
            if(s[i]!='0' || carry)
            {
                int tmp = 10 - ((s[i]-'0') + carry);
                
                res = to_string(tmp) + res;
                carry = 1;
            }
            else
            {
                res = "0" + res;
            }
        }
    }
    int ans = stoi(res);
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}