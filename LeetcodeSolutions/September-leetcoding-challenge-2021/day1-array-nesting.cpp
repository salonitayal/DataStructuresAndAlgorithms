#include<bits/stdc++.h>
using namespace std;

int BruteForce(vector<int> &nums)
{
    int res=0;
        unordered_map<int, int> m;
        int k=0;
        int mx=-1;
        for(int i=0; i<nums.size(); i++)
        {
            k=i;
            unordered_map<int, int> m;
            while(1)
            {
                if(m[k] == 1)break;
                ++m[k];
                k = nums[k];
                ++res;
                mx = max(mx, res);
            }
            cout << nums[i] << "->";
            for(auto i:m)cout << i.first << " ,";
            cout << endl;
            res=0;
            
        }
        return mx;
}

int BetterSolution(vector<int> nums)
{
    vector<int> v(nums.size(), 0);
        int res, mx=-1;
        for(int i=0; i<nums.size(); i++)
        {
            int k=i;
            res=0;
            if(!v[k])
            {
                while(!v[k])
                {    v[k]=1, k=nums[k], ++res;}
                mx=max(res, mx);   
            }
        }
        return mx;
}

int main(){
    int n; cin>>n;
    vector<int> a(n); for(int i=0; i<n; i++)cin >> a[i];
    cout << BruteForce(a) << endl;
    cout << BetterSolution(a);
}
