#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        
        map<int, int> m;
        int res=0, sum=0;
        for(int i=0; i<n; i++)
        {
            sum += a[i];

            if(sum == 0)res = i+1;

            if(m.find(sum) != m.end())
            {
                res = max((i-(m.find(sum)->second)), res);
            }
            m.insert(make_pair(sum, i));
        }
        cout << res << endl;
    }
    return 0;
}