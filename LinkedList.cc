#include "LinkedList.h"

LinkedList::LinkedList (void) {
    this->head = NULL;
}

void LinkedList::insertNode (int newVal) {
    ListNode * newNode = new ListNode(newVal);

    if (this->head == NULL) {
        this->head = newNode;
        return;
    }

    ListNode * currNode = this->head;
    while (currNode->next != NULL) {
        currNode = currNode->next; 
    }

    currNode->next = newNode; 
}

void LinkedList::printList (void) {
    ListNode * currNode = this->head;

    if (this->head == NULL) {
        std::cout << "[]" << std::endl;
        return;
    }

    std::cout << "[";
    while (currNode != NULL) {
        std::cout << currNode->data << ", ";
        currNode = currNode->next; 
    }
    std::cout << "]" << std::endl; 
}
