#include<bits/stdc++.h>
using namespace std;
// bool isIdealPermutation(vector<int>& v) {
//         vector<int>d;
//         int l=0, g=0;
//         for(int i=0; i<v.size()-1; i++)
//         {
//             if(v[i]>v[i+1])++l;
//         }
//         d.push_back(v[0]);
//         for(int i=1; i<v.size(); i++)
//         {
//             if(d[d.size()-1]>=v[i])
//             {
//                 g += d.size();
//                 d.push_back(v[i]);
//             }
//             else
//             {
//                 if(d[0]>=v[i])
//                 {
//                     int j=0;
//                     while(d[j]>v[i])++j;
//                     d.insert(d.begin()+j, v[i]);
//                     g += j;
//                 }
//                 else 
//                 {
//                     d.insert(d.begin(), v[i]);
//                 }
//             }
//         }
//         if(l == g)return true;
//         else return false;
//     }



bool isIdealPermutation(vector<int>& v) {
        for(int i=0; i<v.size(); i++)
            if(abs(v[i]-i)>1)
                return false;
        return true;
    }

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin >> v[i];
    cout << isIdealPermutation(v);
}