#include<iostream>
using namespace std;

class Node
{
    public: 
        int data;
        Node* next;
};

Node *head ;

int main()
{
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

    cout << endl;

    cout << "Linked list: ";
    while(head != NULL)
    {
        cout << head-> data << " ";
        head = head-> next;
    }cout << endl;

    // INSERTION AT THE BEGINNING

    Node *at_begin = new Node();
    at_begin -> data = 4;
    at_begin -> next = first;
    head = at_begin;
    
    cout << "After Insertion At begin: " ;
    while(head != NULL)
    {
        cout <<  head-> data << " ";
        head = head-> next;
    }
    cout << endl;


    // INSERTION AT THE END

    head = first;

    Node *at_end = new Node();
    at_end -> data = 0;
    at_end -> next = NULL;
    third -> next = at_end;

    cout << "After Insertion At End: " ;
    while(head != NULL)
    {
        cout <<  head-> data << " ";
        head = head-> next;
    }
    cout << endl;

    // INSERTION AT CERTAIN POSITION

    cout << "Enter the Position: ";
    int p;cin>>p;

    head = first;

    Node *at_pos = new Node;
    at_pos -> data = 99;
    Node *x = head;
    for(int i = 1; i < p-1; i++)
    {
        x = x -> next;
    }
    at_pos -> next = x -> next;
    x -> next = at_pos;
   
    cout << "After Insertion At Position: " ;
    while(head != NULL)
    {
        cout <<  head-> data << " ";
        head = head-> next;
    }
    cout << endl;
    cout << first;


    return 0;
}