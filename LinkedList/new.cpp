#include <iostream>

class Node {
    public:
    int data;
    Node* next;
};

void deleteNode(Node* nodeToDelete) {
    Node* temp = nodeToDelete->next;
    nodeToDelete->data = temp->data;
    nodeToDelete->next = temp;
    delete temp;
}

void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    for (int i = 1; i <= 5; i++) {
        Node* newNode = new Node();
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    // Deleting the node with data 3
    // Node* toDelete = head->next->next;
    // deleteNode(toDelete);

    std::cout << "Linked List after deletion: ";
    printList(head);

    return 0;
}