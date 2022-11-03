#include <iostream>
#ifndef HW5_LINKED_LISTS_NODE_H
#define HW5_LINKED_LISTS_NODE_H

class Node {
public:

    int Data;
    Node* Next = nullptr;

    //constructors
    Node(int data);
    std::string ToString();
};

class LinkedList {
public:
    Node* Head;
    void AddElement(Node* point);
    std::string ToString();
};

#endif //HW5_LINKED_LISTS_NODE_H