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
void print(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    return;
}
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node *Add1(Node *head)
{
    head = reverse(head);
    Node *head2 = head;
    int carry = 1;
    while (head2 != NULL)
    {
        if (head2 == NULL && carry == 1)
        {
            Node *newnode = new Node(1);
            head2->next = newnode;
            head2->data = 0;
            carry = 0;
        }
        if (head2->data < 9)
        {
            // print(head);
            head2->data = head2->data + carry;
            carry = 0;
            // print(head);
            head = reverse(head);
            // print(head);
            return head;
        }
        else
        {
            head2->data = 0;
            carry = 1;
            if (head2->next == NULL)
            {
                Node *newnode = new Node(1);
                head2->next = newnode;
                newnode->next = NULL;
                // head2=newnode;
                head = reverse(head);
                return head;
            }
            head2 = head2->next;
        }
    }
    head = reverse(head);
    return head;
}
int main()
{
    Node *head = new Node(8);
    Node *second = new Node(0);
    Node *third = new Node(9);
    // Node * fourth = new Node(2);
    // Node * fifth = new Node(1);
    head->next = second;
    second->next = third;
    third->next = NULL;
    // fourth->next=fifth;
    // print(head);
    // InsertAtHead(head,6);
    // head=reverse(head);
    head = Add1(head);
    print(head);
}