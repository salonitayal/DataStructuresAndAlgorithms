#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    
    int n; cin >> n;
    
    for(int i=0; i<n; i++){
        string s1, s2; 
        int n1, n2;
        cin >> s1 >> n1 >> s2 >> n2; 
        
        if(s1 == s && s2 == s){
            if(n1 > n2) cout << "Player 1 wins" << endl;
            else if(n1 < n2) cout << "Player 2 wins" << endl;
            else if(n1 == n2) cout << "Draw" << endl;
        }
        
        if(s1 == s && s2 != s)cout << "Player 1 wins" << endl;
        if(s2 == s && s1 != s)cout << "Player 2 wins" << endl;
        
        if(n1 > n2 && s1 != s && s2 != s) cout << "Player 1 wins" << endl;
        else if(n1 < n2 && s1 != s && s2 != s) cout << "Player 2 wins" << endl;
        else if(n1 == n2 && s1 != s && s2 != s) cout << "Draw" << endl;
        
        
    }
    return 0;
}