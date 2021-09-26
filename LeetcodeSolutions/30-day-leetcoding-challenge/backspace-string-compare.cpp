#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {
        int c=0;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i] == '#')
            {
                ++c;
                s[i] = '0';
            }
            else
            {
                if(c != 0)
                {
                    --c;
                    s[i] = '0';
                }
            }
        }
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '0')
            {
                s.erase(i, 1);
                --i;
            }
        }
        
        c = 0;
        for(int i=t.length()-1; i>=0; i--)
        {
            if(t[i] == '#')
            {
                ++c;
                t[i] = '0';
            }
            else
            {
                if(c != 0)
                {
                    --c;
                    t[i] = '0';
                }
            }
        }
        for(int i=0; i<t.length(); i++)
        {
            if(t[i] == '0')
            {
                t.erase(i, 1);
                --i;
            }
        }

        cout << t;
        if(s==t)return true;
        else return false;
    }

int main() {
    string s="xywrrmp", t = "xywrrmu#p";
    cout << backspaceCompare(s, t);
	return 0;
}
