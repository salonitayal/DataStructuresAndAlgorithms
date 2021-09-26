# Linked List Implementation

```
#include<iostream>
using namespace std;

class Node
{
    public: 
        int data;
        Node* next;
};

int main()
{
    Node *head;
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head = first;

    first -> data = 3;
    first -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 1;
    third -> next = NULL;

    while(head != NULL)
    {
        cout << head-> data << " ";
        head = head-> next;
    }


    return 0;
}
```
