#include <iostream>
#include "node.h"

int main (){
    Node* pointer1 = new Node(8);
    Node* pointer2 = new Node(5);
    Node* pointer3 = new Node(9);

    std::cout << pointer1 -> ToString() << std::endl;

    LinkedList MyList = LinkedList(); //type_of_class name = constructor
    std::cout << "List before adding: " << MyList.ToString() << std::endl;
    MyList.AddElement(pointer1);
    MyList.AddElement(pointer2);
    MyList.AddElement(pointer3);
    std::cout << "List after adding: " << MyList.ToString() << std::endl;
}