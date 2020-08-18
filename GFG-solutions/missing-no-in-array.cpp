//==========================================================================================================================
//=======     BIT MANIPULATION       ==============        https://ide.geeksforgeeks.org/SOZzqSCmno         ====================================
//==========================================================================================================================

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n-1];
        for(int i = 0; i< n-1; i++)cin >> a[i];

        sort(a, a+n-1);
        int x;
        for(int i = 0; i< n; i++)
        {
            x = (i+1 ^ a[i]);
            if(x != 0)
            {
                x = i+1; 
                break;
            }
        }
    cout <<x<< endl;
    }
    return 0;
}   