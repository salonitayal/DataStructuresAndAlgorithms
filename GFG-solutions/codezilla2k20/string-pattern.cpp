#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    string s; cin >> s;
    int n; cin >> n;
    int x=2*(n-1);
    for(int j=0; j<n; j++)
    {
        int i=j;
        while(i<s.length())
        {
            cout << s[i];
            i+=x;
        }
        if(x-2 >= 2)x-=2;
        else x=2*(n-1);
    }
    return 0;
}
