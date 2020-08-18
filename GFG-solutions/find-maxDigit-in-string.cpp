
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s; cin >> s;

    int res = 0, num = 0;
    for(int i = 0; i < s.length(); i++)                                         
    {
        if(s[i] >= '0' && s[i] <= '9')
            num = num * 10 + s[i]-'0';
        else
        {
            res = max(num, res);
            num = 0;
        }
        
    }
    cout << max(res, num);
    return 0;
}


 
