/******************************************
		* AUTHOR : SALONI TAYAL *
******************************************/

#include <bits/stdc++.h>
#define ll unsigned long long int
#define vchk(v) for(auto i:v)cout << i << " ";
#define p(a) cout << a << endl;
#define MOD 1000000007
using namespace std;

void solve()
{
    int n, d; cin >> n >> d;
    string s = to_string(n);
    int idx=-1, cnt=0, l=s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i] == d+'0' && cnt==0)
        {
            idx = i;
        }
        if(s[i] == d+'0')
        {
            ++cnt;
        }
    }
    if(idx==-1)  // that is digit doesn't exist
    {
        cout << 0;
        return;
    }
    if(d==0)
    {
        string x = "";
        for(int i=0; i<idx; i++)
            x += s[i];
        for(int i=idx; i<l; i++)
            x += '1';
        int num1 = stoi(x), num2 = stoi(s);
        int res = num1-num2;
        cout << res;
        return;
    }
    if(d==9)
    {
        if(idx == 0) // 9019 9
        {
            string x="1";
            for(int i=0; i<l; i++)x += '0';
            int num = stoi(x);
            int res = num - n;
            cout << res;
            return;
        }
        string x = "";
        int tmp_idx=-1;
        for(int i=idx-1; i>=0; i--)
        {
            if(s[i] == '8')
            {
                x += '0';
            }
            else
            {
                tmp_idx = i;
                break;
            }
        }
        if(tmp_idx >= 0)
        {
            string z = "";
            z += s[tmp_idx];
            int tmp = stoi(z);
            ++tmp;
            x = to_string(tmp) + x;
        }
        else x = '1'+x;
        for(int i=tmp_idx-1; i>=0; i--)
        {
            x = s[i] + x;
        }
        for(int i=idx; i<l; i++)
            x += '0';
            
        int num = stoi(x);
        int res = num - n;
        cout << res; 
        return;
    }
    if(cnt == 1)
    {
        string res="1";
        int tmp_cnt=0;
        for(int i=idx+1; i<l; i++)
        {
            if(s[i] == '0')++tmp_cnt;
        }
        if(tmp_cnt == l-idx-1)
        {
            for(int i=0; i<tmp_cnt; i++)res += '0';
            int x = stoi(res);
            cout << x;
            return;
        }
    }
    int carry=0;
    string res="";
    for(int i=l-1; i>idx; i--)
    {
        if(carry == 0)
        {
            int tmp = 10-(s[i]-'0');
            if(tmp < 10)
            {
                res = to_string(tmp) + res;
                carry = 1;
            }
            else
                res = to_string(0) + res;
        }
        else
        {
            int tmp = 10-((s[i]-'0')+carry);
            res = to_string(tmp) + res;
        }
    }
    int x = stoi(res);
    cout << x;
}
int main()

{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t; cin >> t;
	while(t--)
	{
		solve();
		cout << endl;
	}
	return 0;
}