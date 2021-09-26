#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int, greater<int>> m{{88, 2}, {3, 0}, {8, 2}, {4, 3}};
    //int n; cin>> n; int b[n];
    //for(int i=0; i<n; i++)b[i]= 0;
    cout << "key "<< "value" << endl;
    for(auto x : m)cout << x.first<<"   "<<x.second<<endl;

    cout << "key "<< "value" << "map" <<endl;
    for(auto x : m){cout << x.first<<"   "<<x.second<<endl;}
    

    multimap<int, int, greater<int>> mm;
    for(int i=0; i<4; i++)mm.insert(pair<int, int>(m[i], i));
    cout << "key "<< "value_mm" << endl;
    for(auto i:mm)cout <<i.first << "   "<< i.second <<endl;


    unordered_map<int, int> um{{2, 3}, {9, 4}, {7, 6}, {0, 3}};
    cout << "key "<< "value_um" << endl;
    for(auto i:um)cout <<i.first << "   "<< i.second <<endl;

    // Erase In Maps
   // m.erase(88);
    
    return 0; 

}