#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value);
};

class DLL {
private:
    Node* head;
    Node* tail;

public:
    DLL();
    ~DLL();

    void append(int value);
    void printForward();
};

#endif
