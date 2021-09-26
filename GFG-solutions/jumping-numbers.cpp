#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;
        queue<int> q;
        set<int> s;
        cout << 0 << " ";

        for(int i=1; i <= 9; i++)
        {
            q.push(i);
            while(!q.empty())
            {
                int temp = q.front();
                q.pop();
                if(temp > x)continue;  // Whenever a continue statement is encountered inside a loop, 
                                        // control directly jumps to the beginning of the loop for next iteration, 
                                       // skipping the execution of statements inside loop’s body for the current iteration.
                s.insert(temp);

                int leftMost = temp % 10;
                if(leftMost > 0)q.push(temp * 10 + (leftMost - 1)); // > 0 means u can subtract from num
                if(leftMost < 9)q.push(temp * 10 + (leftMost + 1)); 
            }
        }
        for(auto i : s)
        {
            cout << i << " ";
        }

    }
    return 0;
}