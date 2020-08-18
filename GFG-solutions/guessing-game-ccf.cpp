#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n; 
    int y = n/2; cout << y << endl;
    char gr = 'A'; 
    int flag_g = 0, flag_l = 0;

    vector<char>v;

    while(gr != 'E')
    {
        cin >> gr; v.push_back(gr);

        if(gr == 'L' || flag_l >= 2)
        {
            if(flag_g < 1 || flag_g == 1)
            {
                y = y/2;
                ++flag_l;
            }
            else if(flag_g >= 2) 
            {
                y = y/2;
                ++flag_l;
                --flag_g;
            }
        }
        
        if(gr == 'G' || flag_g == 2)
        {
            if(flag_l < 1 || flag_l == 1)
            {
                y = (n + y)/2;
                ++flag_g; 
            }
            else if(flag_l >= 2)
            {
                y = (n + y)/2;
                ++flag_g;
                --flag_l;
            }
        }

        if(gr != 'E') cout << y << endl;
    }
    return 0;
}