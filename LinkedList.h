#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "ListNode.h" 

class LinkedList {

    private:
        ListNode * head; /*!< Head of Linked List instance. */ 
    
    public:

        /**
         * @brief Construct a new LinkedList object.
         * @param None.
         * @return LinkedList instance. 
         */
        LinkedList (void); 

        /**
         * @brief Insert new Node data into Linked List. 
         * @param newVal - Numerical value of new ListNode to be inserted. 
         * @return None. 
         */
        void insertNode (int newVal); 

        /**
         * @brief Print out values of Linked List instance. 
         * @param None.
         * @return None. 
         */
        void printList (void); 

};

#endif /* End LinkedList.h */ 
