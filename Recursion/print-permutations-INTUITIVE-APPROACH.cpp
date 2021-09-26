#include<bits/stdc++.h>
using namespace std;

void printPermutations(string s, string x)
{
    if(s.length() == 0)
    {
        cout << x << " ";
        return;
    }
    for(int j=0; j<s.length(); j++)
    {
        string left_part = s.substr(0, j);
        string right_part = s.substr(j+1);
        string new_string = left_part+right_part;
        printPermutations(new_string, x+s[j]);
    }
}

int main(){
    string s; cin >> s;
    printPermutations(s, "");
    cout << endl;
}
    