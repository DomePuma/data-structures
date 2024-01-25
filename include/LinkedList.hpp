#ifndef _LINKEDLIST_HPP
#define _LINKEDLIST_HPP

#include "Node.hpp"

namespace Data {
    template<class>
    class ListIterator;

    template<class Datatype>
    class LinkedList{
        public:
        Node<Datatype>* _head;
        Node<Datatype>* _tail;
        int _count;

        LinkedList();
        ~LinkedList();

        void append(Datatype data);
        void prepend(Datatype data);

        void removeHead();
        void removeTail();

        ListIterator<Datatype> getInterator();

    };
}

#endif //_LINKEDLIST_HPP
