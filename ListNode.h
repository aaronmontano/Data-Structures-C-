#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream> 

class ListNode {
    public: 
        int data; /*!< Data value of Node (integer). */ 
        ListNode * next; /*!< Pointer to next Node in Linked List. */

        /**
         * @brief Construct a new ListNode object (default constructor). 
         * @param None. 
         * @return ListNode instance (data set to 0). 
         */
        ListNode () {
            this->data = 0;
            this->next = NULL;
        }

        /**
         * @brief Construct a new ListNode object (parameterized constructor). 
         * @param data - Integer data to be held in Node. 
         * @return None. 
         */
        ListNode (int data) {
            this->data = data;
            this->next = NULL; 
        }
};

#endif /* End ListNode.h */ 