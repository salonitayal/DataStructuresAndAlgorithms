// ====================     CAN'T FUCKING BELIEVE I SOLVED HARD LEVEL PROBLEM ON MY OWN WITHOUT ANY KINDA HINT WOW     ===========================
// ====================                           https://ide.geeksforgeeks.org/mcUhrM15Ha                             ==========================
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int sum, c=1; cin>>sum;
        vector<int> v;
        for(int i = 3; i <= sum-3; i+=2)
        {
            int x = i/2;
            while(x > 2)
            {
                if(i%x == 0){c=0; break;}
                else x--, c++;
            }
            if(c){ v.push_back(i);}
        }
        //for(auto i:v)cout << i<<" ";
        int i=0, j=v.size()-1;
        while(i<j)
        {
            if((v[i] + v[j]) == sum)
            {
                cout << v[i] << " " << v[j] << endl; 
                break;
            }
            else if((v[i] + v[j]) < sum) i++;
            else --j;
        }
    }
    return 0;
}