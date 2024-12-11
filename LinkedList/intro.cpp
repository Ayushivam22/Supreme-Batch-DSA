#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next=NULL;
    Node(int data)
    {
        this->data=data;
    }
};

void print(Node *node)
    {
        while(node != NULL)
        {
            cout<<node->data<<" ";
            node = node->next;
        }
        cout<<endl;
    }
int main()
{
    Node *head = new Node(8);
    Node *second = new Node(0);
    Node *third = new Node(9);
    Node * fourth = new Node(2);
    Node * fifth = new Node(1);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    
    print(head);
    print(head);

}