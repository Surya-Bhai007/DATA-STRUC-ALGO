#include<iostream>
using namespace std;

class node
{
public:
   int data;
   node * next;
};

struct Node
{
   int data;
   Node* next;
};



int main()
{
//  node* head;
//  node* one= new node();
//  node*two =new node();


//  one->data=1;
//  two->data=2;

//  one->next=two;
//  two->next=NULL;

// head=one;
// // while(head!=NULL)
// {
//    // cout<<head->data<<endl;
//    // head=head->next;
// }

// node* four=new node();
// four->data=4;
// four->next=two;
// one->next=four;
// head=one;
// while(head!=NULL)
// {
//    cout<<head->data<<endl;
//    head=head->next;
// }
// //deletion operation


cout<<endl<<endl;
         //USING STRUCTURE
// initializing nodes
struct Node *head;
struct Node *one=NULL;
struct Node *two=NULL;
struct Node *three=NULL;


// Allocate memory

one=new Node();
two=new Node();
three=new Node();

// Assign data values

one->data=1;
two->data=2;
three->data=3;
//Connect nodes

one->next=two;
two->next=three;
three->next=NULL;

head=one;


while (head!=NULL)
{
   cout<<head->data<<endl;
   head=head->next;
}









}