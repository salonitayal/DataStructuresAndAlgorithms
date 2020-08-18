#include <cmath>
#include <list>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1, s2; cin >> s1;
    cin >> s2;
    list<char> l, l1;
    for(int i=0; s2[i]; i++)l.push_back(s2[i]);
    
    for(int i=0; s1[i]; i++){
        if(find(l.begin(), l.end(), s1[i]) == l.end()) 
            l.remove(s1[i]);
        else{
            while(l.front() != s1[i])
                l.pop_front();
            l.pop_front();
            l1.push_back(s1[i]);
        }
    }
    cout << l1.size() << endl;
    
    
    return 0;
}
