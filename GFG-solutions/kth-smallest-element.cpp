// I did it on my own and got it accepted.
#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n]; set<int> s;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int k; cin >> k;
        
        auto it = next(s.begin(), k-1);
        cout << *it << endl;
    }
    return 0;
}

// YET ANOTHER SOLUTION . I DID IT TOO. IT WAS MEDIUM LVL QUES. FEELING SO PUMPED UP RN.
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n]; 
        for(int i = 0; i < n; i++)cin >> a[i];
        int k; cin >> k;
        sort(a, a+n);
        cout << a[k-1] << endl;
    }
    return 0;
}

