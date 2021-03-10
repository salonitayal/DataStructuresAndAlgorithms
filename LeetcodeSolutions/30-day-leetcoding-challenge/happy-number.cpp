#include<bits/stdc++.h>
using namespace std;

int sum(int n)
    {
        int sm = 0;
        while(n)
        {
            sm += pow(n%10, 2);
            n /= 10;
        }
        return sm;
    }

bool isHappy(int n) {
        set<int> s;
        s.insert(n);
        int res = sum(n);
        s.insert(res);
        bool x = true;
        while(x)
        {
            res = sum(res);
            int tmp = s.size();
            s.insert(res);
            
            if(tmp == s.size() || res == 1)x = false;
        }
        if(res == 1)return true; 
        else return false;       
    }
int main()
{
    int n; cin >> n; 
    cout << isHappy(n);
}