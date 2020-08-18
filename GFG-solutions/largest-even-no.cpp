#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
    string s; cin >> s;
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    
    int l = s.length();
    if(s[l-1] % 2 != 0)
    {
        for(int i = l-2; i >= 0; i--)
        {
            if(s[i] % 2 == 0)
            {
                swap(s[l-1], s[i]);
                break; // breaks the loop 
            }
            
        }
        sort(s.begin(), s.end()-1);
        reverse(s.begin(), s.end()-1);
    }
    cout << s << endl;
    }
    
    return 0;
}