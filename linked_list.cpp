#include "linked_list.h"

Node::Node(int value) : data(value), next(nullptr), prev(nullptr) {}

DLL::DLL() : head(nullptr), tail(nullptr) {}

DLL::~DLL() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void DLL::append(int value) {
    Node* newNode = new Node(value);
    if (tail == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DLL::printForward() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
