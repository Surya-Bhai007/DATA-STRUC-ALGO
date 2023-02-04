#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

struct Node
{
    int data;
    Node *next;
};

int main()
{
    { // node *head;
        // node *one = NULL;
        // node *two = NULL;
        // node *three = NULL;

        // // allocate 3 node in heap
        // one = new node();
        // two = new node();
        // three = new node();

        // // Assign data values
        // one->data = 1;
        // two->data = 2;
        // three->data = 3;

        // // connect nodes

        // one->next = two;
        // two->next = three;
        // three->next = NULL;

        // // print the linked list value
        // head = one;
        // while (head != NULL)
        // {
        //     cout << head->data << " ";
        //     head = head->next;
        // }
        // cout << endl;
        // deletion operation here 3 is deleted
        //  one->next=three;
        //  delete two;         //heap memory of two is free
        //  head = one;

        // node* temp =one;
        // node*temp2 =two;
        // temp2 =temp->next;
        // temp->next=temp2->next;
        // delete two;
        // cout<<two->next;

        // while(head!=NULL)
        // {
        //     cout<<head->data<<" ";
        //     head=head->next;
        // }

        // USING STRUCTURE
        //  initializing nodes

        struct Node *head;
        struct Node *one = NULL;
        struct Node *two = NULL;
        struct Node *three = NULL;

        // Allocate memory

        one = new Node();
        two = new Node();
        three = new Node();

        // Assign data values

        one->data = 1;
        two->data = 2;
        three->data = 3;
        // Connect nodes

        one->next = two;
        two->next = three;
        three->next = NULL;

        head = one;

        while (head != NULL)
        {
            cout << head->data << endl;
            head = head->next;
        }
    }
    
}