#include<bits/stdc++.h>
using namespace std;

string conv(string p0, string p1)
{
    if((p1 == "AM") && (stoi(p0.substr(0, 2)) == 12))
    {
        string tmp = p0.substr(3, 5);
        p0 = "00:";
        p0 += tmp;
    }
    else if((p1 == "PM") && (stoi(p0.substr(0, 2)) != 12))
    {
        string tmp = p0.substr(3, 5);
        int x = stoi(p0.substr(0, 2));
        x += 12;
        p0 = to_string(x);
        p0 += ":";
        p0 += tmp;
    }
    return p0;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string p0, p1; cin >> p0 >> p1;
        string ans = "";
        p0 = conv(p0, p1);
        int n; cin >> n;
        while(n--)
        {
            string l0, l1, r0, r1;
            cin >> l0 >> l1 >> r0 >> r1;
            l0 = conv(l0, l1);
            r0 = conv(r0, r1);

            //cout << p0 << " " << l0 << " " << r0;

            int flag=0;
            if(p0.substr(0, 2) > l0.substr(0, 2))flag = 1;
            else if(p0.substr(0, 2) == l0.substr(0, 2))
            {    
                if(p0.substr(3, 5) >= l0.substr(3, 5))flag = 1;
            }
            else flag = 0;
            
            // for r
            int flag1=0;
            if(p0.substr(0, 2) < r0.substr(0, 2))flag1 = 1;
            else if(p0.substr(0, 2) == r0.substr(0, 2))
            {    
                if(p0.substr(3, 5) <= r0.substr(3, 5))flag1 = 1;
            }
            else flag1 = 0;

            (flag&flag1)? ans += "1" : ans += "0";
        }
        cout << ans << endl;
    }
    return 0;
}