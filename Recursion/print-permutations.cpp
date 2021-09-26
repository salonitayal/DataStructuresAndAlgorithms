#include<bits/stdc++.h>
using namespace std;

void printPermutations(string s, int i)
{
    if(i == s.length()-1)
    {
        cout << s << " ";
        return;
    }
    for(int j=i; j<s.length(); j++)
    {
        swap(s[i], s[j]);
        printPermutations(s, i+1);
    }
    
}

int main(){
    string s; cin >> s;
    printPermutations(s, 0);
    cout << endl;
}
    