#include <iostream>
#include<stack>
using namespace std;

stack<int> delete(stack<int> s, int size, int i)
{
    if(i == size/2)
    {
        s.pop();
        return s;
    }
    int head = s.top();
    s.pop();
    s = delete(s, size, i+1);

    s.push(head);
    return s;

}

int main()
{
    stack<int> s;
    s.push(1);s.push(2);s.push(3); s.push(4);
    delete(stack<int> s, int size, int i);
    while(!s.empty())
    {
        cout << s.top()<< " ";
        s.pop();
    }
    return 0;
}