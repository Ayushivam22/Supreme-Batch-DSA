#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* node)
{
    while(node != NULL)
    {
    cout<<node->data<<" ";
    node=node->next;
    }
    cout<<endl;
}
void InsertAtHead(Node* &head,int data)
{
    Node* temp = new Node(data);
    temp->next = head;
    head=temp;
    return;
}
int main()
{
    Node * head = new Node(5);
    Node * second = new Node(4);
    Node * third = new Node(3);
    Node * fourth = new Node(2);
    Node * fifth = new Node(1);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    print(head);
    InsertAtHead(head,55);
    print(head);
}