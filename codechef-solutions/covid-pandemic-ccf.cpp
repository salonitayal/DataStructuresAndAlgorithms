#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; 
        vector<int> v;
        int c1 = 0;

        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            if(x == 1)
                v.push_back(i);
        } 
        if(v.size() == 1)c1 = 1;
        for(int i=1; i<v.size(); i++)
        {
            if(v[i] - v[i-1] >= 6)++c1;
            else {
                c1 = 0;
                break;
            }
        }
        (c1)? cout << "YES" : cout << "NO";
        cout << endl;
    }
}