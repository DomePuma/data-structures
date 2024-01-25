#ifndef _LIST_ITERATOR_HPP
#define _LIST_ITERATOR_HPP

#include "Node.hpp"

namespace Data
{
    template<class>
    class LinkedList;

    template<class Datatype>
    class ListIterator
    {
        public:
        Node<Datatype>* _node;
        LinkedList<Datatype>* _list;

        ListIterator(LinkedList<Datatype>& list = nullptr);
        
        ListIterator(LinkedList<Datatype>* list = nullptr);

        void Start();
        void Next();
        
        Datatype& item();

        bool isValid();
        bool hasNext();



    };
}

#endif //_LIST_ITERATOR_HPP