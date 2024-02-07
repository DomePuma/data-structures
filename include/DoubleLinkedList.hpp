#ifndef _DOUBLE_LINKED_LIST_HPP_
#define _DOUBLE_LINKED_LIST_HPP_

#include "DoubleNode.hpp"

namespace Data {
    template <class>
    class DoubleListIterator;

    template<class Datatype>
    class DoubleLinkedList
    {
        public:
        DoubleNode<Datatype>* _head;
        DoubleNode<Datatype>* _tail;
        int _count;

        DoubleLinkedList();
        ~DoubleLinkedList();

        void append(Datatype data);
        void prepend(Datatype data);
        void insertAfter(DoubleListIterator<Datatype>& itr, Datatype data);
        void insertBefore(DoubleListIterator<Datatype>& itr, Datatype data);
        
        void removeHead();
        void removeTail();
        void remove(DoubleListIterator<Datatype>& itr);

        DoubleListIterator<Datatype> getIterator();
    };
}

#endif //_DOUBLE_LINKED_LIST_HPP_