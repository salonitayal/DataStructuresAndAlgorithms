#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n];
    for(int i=0; i<n; i++)cin >> a[i];
    sort(a, a+n);
    unordered_map<int, int> m = {{1, 2}, {2, 1}, {3, 2}, {4, 2}, {5, 2}, 
                                {6, 1}, {7, 2}, {8, 2}, {9, 2}, {10, 1}, 
                                {11, 3}, {12, 2}, {13, 3}, {14, 4}, {15, 3},
                                {16, 3}, {17, 4}, {18, 4}, {19, 4}, {20, 1},
                                {30, 1}, {40, 1}, {50, 1}, {60, 1}, {70, 2},
                                {80, 2}, {90, 2}, {100, 2}};

    int d = 0;  // get value of D
    for(int i=0; i<n; i++)
    {
        if(m[a[i]] != 0)
        {
            d += m[a[i]];
        }
        else
        {
            int x = a[i];
            d += m[x % 10];
            x /= 10;
            d += m[x * 10];
        }
        
    }
    unordered_map<int, int> m2;
    int count = 0;
    for(int i=0; i<n; i++)++m2[a[i]];
    
    for(int i=0; i<n; i++)
    {
        count += m2[d - a[i]];
        if(d - a[i] == a[i])--count;
    }
    count /= 2;

    unordered_map<int, string> v = {{0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"},
                        {7, "seven"}, {8, "eight"}, {9, "nine"}, {10, "ten"}, {11, "eleven"}, {12, "twelve"}, 
                        {13, "thirteen"}, {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"}, {17, "seventeen"}, 
                        {18, "eighteen"}, {19, "nineteen"}, {20, "twenty"}, {30, "thirty"}, {40, "forty"}, {50, "fifty"},
                        {60, "sixty"}, {70, "seventy"}, {80, "eighty"}, {90, "ninety"}, {100, "hundred"}};
                         

    if(count > 100)
    {
        cout << "greater 100";
    }
    else if(v[count] != "")
    {
        cout << v[count];
    }
    else
    {
        int x = count;
        stack<int> s;
        s.push(x % 10);
        x /= 10;
        s.push(x);
        x = 10 * s.top();
        s.pop();
        cout << v[x] << " " << v[s.top()];
        s.pop();
    }
    
    return 0;
}

