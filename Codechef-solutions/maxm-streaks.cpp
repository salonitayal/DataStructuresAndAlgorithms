#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n], h = 0, t = 0;
    int maxh = 0, maxt = 0;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        if(s == "Heads") a[i] = 1;
        else if(s == "Tails") a[i] = 0;
    }
 
    for(int i=0; i<n; i++){
        if(a[i] == 1){
            ++h; 
            maxh = max(h, maxh);
            t = 0;
        } else {
            ++t; 
            maxt = max(t, maxt);
            h = 0;
        }
    }
    cout << maxh << " " << maxt << endl;
    
    return 0;
}