#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};





int main()
{
    struct  Node* head=new Node();
    struct  Node* one=new Node();
    struct  Node* two=new Node();
    struct  Node* ptr=head;


    one->val=1;
    two->val=2;

    one->next=two;
    two->next=head;

    ptr=ptr->next;

    while(head!=ptr)
    {
        cout<<ptr->val<<"\n";
        ptr=ptr->next;
    }



    


}