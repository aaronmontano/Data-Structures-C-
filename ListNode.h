#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream> 

class ListNode {
    public: 
        int data;
        ListNode * next; 

        ListNode () {
            this->data = 0;
            this->next = NULL;
        }

        ListNode (int data) {
            this->data = data;
            this->next = NULL; 
        }
};

#endif /* End ListNode.h */ 