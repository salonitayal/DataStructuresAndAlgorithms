#include<bits/stdc++.h>
using namespace std;

string multiplyStr(string s1, string s2)
{
    long long int n1 = 0, n2 = 0;
    long long int l1 = s1.length() - 1, l2 = s2.length() - 1;
    
    for(long long int i=0; s1[i]; i++)
    {
        n1 += (s1[i] - 48) * pow(10, l1);
        --l1;
    }

    for(long long int i=0; s2[i]; i++)
    {
        n2 += (s2[i] - 48) * pow(10, l2);
        --l2;
    }
    
    long long int n3 = n1 * n2;
    
    string s3 = to_string(n3);
    return s3;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2; cin >> s1 >> s2;
        cout << multiplyStr(s1, s2);
        cout << endl;
    }
    return 0;
}