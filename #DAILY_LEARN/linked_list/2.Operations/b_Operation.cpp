#include <iostream>
using namespace std;

struct Node
{
public:
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
    cout << "\n"
         << "INSERTION AT BEGINNING" << endl;

    //              Insertion

    // at beginning

    struct Node *zero = new Node();
    zero->data = 0;
    zero->next = one;
    head = zero;

    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }

    cout << "\n"
         << "INSERTION AT MIDDLE" << endl;

    struct Node *mid = new Node();
    mid->data = 2;
    mid->next = three;

    two->next = mid;
    head = zero;
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }

    cout << "\n"
         << "INSERTION AT END" << endl;

    struct Node *end = new Node();
    end->data = 4;
    end->next = NULL;

    three->next = end;
    head = zero;

    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }

    //          Delete from a Linked List

    cout << "\n"
         << "-------------------------"
         << "\n"
         << "DELETION AT BEGINNING" << endl;

    head = one;
    delete zero;
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }

    cout << "\n"
         << "DELETION AT MIDDLE" << endl;
    mid->data = mid->next->data; // swapping method

    mid->next = mid->next->next;

    delete three;

    head = one;

    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }

    cout << "\n"
         << "DELETION AT END" << endl;

    head = one;
    while (head != NULL)
    {
        if (head->next->next == NULL)
        {
            head->next = NULL;
            break;
        }

        head = head->next;
    }
    head = one;
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
}