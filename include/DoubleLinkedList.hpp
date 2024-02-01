#ifndef _DOUBLE_LINKED_LIST_HPP_
#define _DOUBLE_LINKED_LIST_HPP_

#include "DoubleNode.hpp"

namespace Data {
    template <class>
    class ListIterator;

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
        void insertAfter(ListIterator<Datatype>& itr, Datatype data);
        void insertBefore(ListIterator<Datatype>& itr, Datatype data);
        
        void removeHead();
        void removeTail();
        void remove(ListIterator<Datatype>& itr);

        ListIterator<Datatype> getIterator();
    };
}

#endif //_DOUBLE_LINKED_LIST_HPP_