//================     https://ide.geeksforgeeks.org/pCT9LjvWT5   =======================================================

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n; cin>> n;
        vector<int> a(n);
        for(auto i=0; i< n; i++)cin>>a[i];
        int count = 1, max = a[0];

        for(int i = 1; i < n; i++)
        {
            if(a[i] >= max)
            {
                max = a[i]; ++count;
            }
        }
        cout << count<< endl;        
    }
    return 0;
}