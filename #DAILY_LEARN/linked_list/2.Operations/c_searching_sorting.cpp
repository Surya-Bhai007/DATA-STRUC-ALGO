#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
int main()
{
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