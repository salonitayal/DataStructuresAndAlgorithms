#include<iostream>
#include<map>
#include <iterator>
#include <algorithm>
using namespace std;

typedef multimap<int, int> :: iterator itr;

int main()
{
    multimap<int, int> um = {{1, 2}, {1, 2}, {0, 2}};
   // um.erase(1);
    pair<itr, itr> x ;
    //for(int i=0; i<n; i++)
    //{
        x = um.equal_range(1);
        for(itr it = x.first; it != x.second; ++it)cout << it->second << " ";
    //}
    
    return 0;
}