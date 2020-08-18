#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    string s; int n; cin>>n;
    getline(cin, s);
    //for(int i=0; i<(n*n)+n; i++)cout << s[i];
    for(int i=1; i<(n*n)+n;)
    {
        if(s[i-1]<s[i] && s[i+1]<s[i])
        {
            s[i]='X'; i++;
        }
        else if(s[i+1]==' '|| s[i-1]==' ')i+=3;
        else i++;
    }
    for(int i=0; i<(n*n)+n;i++)cout << s[i];

    return 0;
}
