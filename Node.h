#include <iostream>
#ifndef HW5_LINKED_LISTS_NODE_H
#define HW5_LINKED_LISTS_NODE_H

class Node {
public:

    int Data;
    Node* Next = nullptr;

    //constructor
    Node(int data);

    std::string ToString();
};

class LinkedList {
public:
    Node* Head;

    void addNode(Node* point);
    std::string printLinkedList();
    void deleteElement(int value);
    LinkedList() = default;
    ~LinkedList();
};
#endif //HW5_LINKED_LISTS_NODE_H