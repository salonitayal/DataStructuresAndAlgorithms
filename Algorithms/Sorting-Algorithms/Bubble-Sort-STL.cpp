#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    cout << "Enter the number of elements in an array: ";
    int n, x; cin >> n;
    vector<int> v;
    cout << "Enter the elements in an array: ";
    while(n-- && cin >> x)v.push_back(x);
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++)cout << v[i] << " ";
    return 0;
}