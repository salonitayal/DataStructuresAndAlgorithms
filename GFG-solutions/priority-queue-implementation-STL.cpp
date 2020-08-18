#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    //int t; cin >> t;

    priority_queue<int> q1; // decreasing queue -> 3 2 1 0 
    q1.push(10);
    q1.push(20);
    q1.push(30);
    cout << q1.top() << endl; // prints 30
    
    // only vector container will be used to implement it
    priority_queue<int, vector<int>, greater<int>> q2;  // increasing queue -> 0 1 2 3 
    q2.push(10);
    q2.push(20);
    q2.push(30);
    q2.pop(); // pop topmost
    cout << q2.top();  // prints 20
    return 0;
}