#ifndef _DOUBLE_LIST_ITERATOR_HPP_
#define _DOUBLE_LIST_ITERATOR_HPP_

#include "DoubleNode.hpp"

namespace Data 
{
    template<class>
    class DoubleLinkedList;
    
    template<class Datatype>
    class DoubleListIterator
    {
        public:
        DoubleNode<Datatype>* _node;
        DoubleLinkedList<Datatype>* _list;

        DoubleListIterator(DoubleLinkedList<Datatype>* list = nullptr);
        DoubleListIterator(DoubleLinkedList<Datatype>& list = nullptr);

        void start();
        void forth();
        void backward();
        void end();

        Datatype& item();
        bool isValid();
        bool hasNext();
        bool hasPrevious();
    };
}

#endif // _DOUBLE_LIST_ITERATOR_HPP_