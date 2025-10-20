#include "DoublyLinkedList.h"
#include <iostream>

void DoublyLinkedList::displayForward() {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}
