#include "Node.h"

Node::Node(int data) {
    Data = data;
}

std::string Node::ToString() {
    std::string result = std::to_string(Data);
    return result;
}

// добавление элемента
void LinkedList::AddElement(Node *point) {
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
std::string LinkedList::ToString() {
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