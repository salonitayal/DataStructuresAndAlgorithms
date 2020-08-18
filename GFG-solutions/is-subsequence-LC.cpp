#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<char> l1, l2;
    string x; cin >> x; 
    for(int i=0; x[i]; i++)l1.push_back(x[i]);
    int n = x.length();
    cin >> x; 
    for(int i=0; x[i]; i++)l2.push_back(x[i]);
    int c = 0;
    
    while(!l1.empty() && !l2.empty())
    {
        if(l1.front() != l2.front())
        {
            l2.pop_front();
        }
        else 
        {
            l1.pop_front();
            l2.pop_front();
            ++c;
        }
    }
    if(c == n)cout << "true";
    else cout << "false";
    
    return 0;
}