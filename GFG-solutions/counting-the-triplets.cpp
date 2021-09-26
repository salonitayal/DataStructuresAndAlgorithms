//=================================================================================================================================
//=======================================      TWO POINTER APPROACH      ==========================================================
//=================================================================================================================================

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--)
    {
    int n; cin >> n; int count = 0;
    int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for(int i = n-1; i>1; i--)
    {
        int j = 0, k =i-1;
        while(j < k)
        {
            if(a[j] + a[k] > a[i])k--;
            else if(a[j] + a[k] < a[i])j++;
            else {++count, ++j;}
        }
    }
    if(count == 0)cout << -1<< endl;
    else    
        cout << count << endl;
    }
    return 0;
}