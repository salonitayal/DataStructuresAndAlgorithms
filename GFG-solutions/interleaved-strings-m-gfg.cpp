#include<bits/stdc++.h>
using namespace std;

bool isInterleaved(string A, string B, string C)
{
    if(!A.length() && !B.length() && !C.length()) return true;

    if(!C.length()) return false;

    bool x = (A.length() && A[0] == C[0] && isInterleaved(A.substr(1), B, C.substr(1)));
    bool y = (B.length() && B[0] == C[0] && isInterleaved(A, B.substr(1), C.substr(1)));

    return x || y;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2, s3; cin >> s1 >> s2 >> s3;
        cout << isInterleaved(s1, s2, s3);
        cout << endl;
    }
    return 0;
}