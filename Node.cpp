#include "Node.h"
#include <algorithm>

Node::Node(int data)
{
    Data = data;
}

std::string Node::ToString() {
    std::string result = std::to_string(Data);
    return result;
}

// добавление элемента
void LinkedList::addNode(Node *point) {
    if (Head == nullptr) {
        Head = point; //point - эл-т, который мы добавляем
        return;
    } else {
        Node *p = Head; //мы находимся в первом элементе
        while (p->Next != nullptr) {
            p = p->Next; // это p.Next, но для ссылок используется ->
        }
        p->Next = point;
    }
}

// вывод всех элементов
std::string LinkedList::printLinkedList() {
    std::string result;
    if (Head == nullptr) {
        result += "Linked list is empty";
        return result;
    }
    Node *p = Head;
    while (p->Next != nullptr){
        result += std::to_string(p -> Data);
        result += " ";
        p = p -> Next;
    }
    result += std::to_string(p -> Data);
    return result;
}

//удаление элементов
void LinkedList::deleteElement(int value) {
    if (Head == nullptr) {
        return;
    }

    // удаление первого элемента
    Node *p = Head;
    while (p->Data == value) {
        Head = p ->Next;
        delete p;
        p = Head;
        if (p == nullptr) {
            return;
        }
    }

    // удаление остальных элементов
    Node *Prev = Head;
    p = Head;
    while (p != nullptr) {
        if (p->Data == value) {
            Prev->Next = p->Next; //отвязка удаляемого элемента
            delete p;
            p = Prev -> Next;
        } else {
            Prev = p;
            p = p -> Next;
        }
    }
}

LinkedList::~LinkedList() {
    std::cout << "destructor did not allow a memory leak" << std::endl;
    Node *p = Head;
    while (p) {
        Node *nextp = p->Next;
        delete p;
        p = nextp;
    }
}
