#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& v) {
        int res = 0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[abs(v[i])-1] < 0){
                res = abs(v[i]);
                break;
            }
            v[abs(v[i])-1]*=-1;
        }
        return res;
    }
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin >> v[i];
    cout << findDuplicate(v);
    return 0;
}