#include <iostream>
#include "Node.h"
#include <string>
#include <fstream>


int main (int argc, char** argv){
    if (argc != 2) {
        std::cout << "Enter only the path to the file" << std::endl;
        return -1;
    }
    std::string filename = argv[1];
    LinkedList MyList = LinkedList(); //type_of_class name = constructor
    std::cout << "List before adding: \n" << MyList.printLinkedList() << std::endl;

    std::ifstream f(filename);
    std::string current_line;
    int last;

    while (getline(f, current_line)) {
        last = std::stoi(current_line);
           MyList.addNode(new Node(last));
    }

    std::cout << "List after adding: \n" << MyList.printLinkedList() << std::endl;
    MyList.deleteElement(last);
    std::cout << "List after deleting: \n" << MyList.printLinkedList() << std::endl;
}