#include <iostream>
#include "node.h"

int main (){
    Node* pointer1 = new Node(8);
    Node* pointer2 = new Node(5);
    Node* pointer3 = new Node(9);
    Node* pointer4 = new Node(8);
    Node* pointer5 = new Node(8);

    std::cout << pointer1 -> ToString() << std::endl;

    LinkedList MyList = LinkedList(); //type_of_class name = constructor
    std::cout << "List before adding: " << MyList.printLinkedList() << std::endl;
    MyList.addNode(pointer1);
    MyList.addNode(pointer2);
    MyList.addNode(pointer3);
    MyList.addNode(pointer4);
    MyList.addNode(pointer5);
    std::cout << "List after adding: " << MyList.printLinkedList() << std::endl;
    MyList.deleteElement(8);
    std::cout << "List after deleting: " << MyList.printLinkedList() << std::endl;
}