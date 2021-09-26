#include<bits/stdc++.h>
using namespace std;

int atoi(string str)
{
    int i = 0, num = 0, flag = 1;
    if(str[0] == '-'){
        i = 1; 
        flag = -1;
    }
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9')
            num = num*10 + (str[i++] - '0');
        else return -1;
    }
    return num * flag;
}
int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << atoi(s) << endl;
    }
    return 0;
}
