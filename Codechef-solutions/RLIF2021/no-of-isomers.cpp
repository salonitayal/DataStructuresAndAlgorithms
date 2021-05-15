#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
// Driver code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        vector<ll> v{0, 1, 1, 1, 2, 3, 5, 9, 18, 35, 75, 159, 355, 802, 1858, 4347, 10359, 24894, 60523, 148284, 366319};
        printf("%d\n", v[n]);
        
    }
    return 0;
}