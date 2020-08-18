#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    //list<char> 
    string lis1, lis2;
    //map<char, int> bm, gm;
    // for(int i=0; i<n; i++)
    // {
    //     char x; cin >> x;
    //     ++bm[x];
    //     lis1.push_back(x);
    // }
    // for(int i=0; i<n; i++)
    // {
    //     char x; cin >> x;
    //     ++gm[x];
    //     lis2.push_back(x);
    // }
    cin >> lis1;
    cin >> lis2;

    int count = 0;
    while(1)
    {
        if(lis1[0] == lis2[0])
        {
            lis1.erase(lis1.begin());
            lis2.erase(lis2.begin());
            count = 0;
        }
        else
        {
            lis2 += lis2.begin();
            lis2.erase(lis2.begin());
            ++count;
        }
        if(count == lis2.length())
        {
            break;
        }
    }

    cout << lis2.size() << endl;
   
    
    
}