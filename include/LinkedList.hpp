#ifndef _LINKED_LIST_HPP_
#define _LINKED_LIST_HPP_

#include "SimpleNode.hpp"

namespace Data {
    template <class>
    class ListIterator;

    template<class Datatype>
    class LinkedList
    {
        public:
        SimpleNode<Datatype>* _head;
        SimpleNode<Datatype>* _tail;
        int _count;

        LinkedList();
        ~LinkedList();

        void append(Datatype data);
        void prepend(Datatype data);
        void insert(ListIterator<Datatype>& itr, Datatype data);

        void removeHead();
        void removeTail();
        void remove(ListIterator<Datatype>& itr);

        ListIterator<Datatype> getIterator();
    };
}

#endif //_LINKED_LIST_HPP_