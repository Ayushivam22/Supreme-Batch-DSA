#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printLinkedList(Node *head)
{
    cout<<"LinkedList:";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void insertAtHead(Node* &head,int data)
{
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
    return;
}

void insertAtEnd(Node* head,int data)
{
    Node*temp=new Node(data);
    while(head->next != NULL) head=head->next;
    head->next=temp;
    return;
}

void reverse(Node*&head)
{
    Node*prev=nullptr;
    Node*curr=head;
    while(curr != NULL)
    {
        Node * next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head = prev;
}
Node* middle(Node*head)
{
    Node*slow=head;
    Node*fast=head;
    while(fast != NULL)
    {
        fast=fast->next;
        if(fast != NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
    }
    return slow;

}
int main()
{

    Node *head = new Node(5);
    Node *first = new Node(4);
    Node *second = new Node(3);
    head->next=first;
    first->next=second;

    // insertAtHead(head,6);
    insertAtEnd(head,2);
    insertAtEnd(head,1);
    reverse(head);
    cout<< "Middle:" << middle(head)->data<<endl;
    printLinkedList(head);
}