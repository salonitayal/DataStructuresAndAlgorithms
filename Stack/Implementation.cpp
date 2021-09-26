#include<iostream>
using namespace std;
int size;
int stack[10];
int top = -1;
void push(int);
void pop();

int main()
{
    cin>> size;
    //for(int i = 0; i < size; i++)cin>> stack[i];
    
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    cout << "Remaining elements: ";
    for(int i=0; i<=top; i++){cout << stack[i] << " ";}
    return 0;
}

void push(int itm)
{
    if(top == (size))
    {
        cout << " overflow" << endl;
    }
    else
    {
        
        ++top;
        stack[top] = itm;
    }
}
void pop()
{
    if(top < 0)
    {
        cout << "Underflow"<< endl;
    }
    else
    {
        cout << "Popped element is: "<< stack[top] << endl;
        top--;
    }

}