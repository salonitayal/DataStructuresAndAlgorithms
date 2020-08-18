#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
//================================================TO DO=========================================================
using namespace std;

int main()
{
    string str; getline(cin, str);
    stack<string> s;
    for(int i = 0; i < str.length(); i++)
    {    
        s.push(str[i]);
    }

    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}