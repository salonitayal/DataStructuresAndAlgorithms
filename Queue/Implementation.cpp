#include<iostream>
using namespace std;
int f = -1, r = -1;
int size;
bool isempty()
{
    if(f == -1 && r == -1)return true;
    else return false;
}

bool isfull()
{
    if(r == size -1)return true;
}
void enque(int size, int q[])
{
    int value; cout << "Enter value";
    cin >> value;
    if(isfull())
    {
       return;
    }
    else if (isempty())
    {
        f= r = 0;
    }
    else{
        ++r;
    }
    q[r] = value;
}
void deque()
{
    if(isempty())
    {
        cout << "Underflow";
    }
    else if(f == r)
    {
        f = r = -1;
    }
    else
    {
        ++f;
    }
    
    
}

int main()
{
    cin >> size;
    int q[size] = {2, 3, 4};
    enque(size, q);
    deque();
    for(int i = f; i <= r; i++)cout<< q[i] << " ";
    return 0;
}