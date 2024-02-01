#include "DoubleListIterator.hpp"
#include "DoubleLinkedList.hpp"

namespace Data
{
    template <class Datatype>
    inline DoubleListIterator<Datatype>::DoubleListIterator(DoubleLinkedList<Datatype>* list)
    {
        this->_list = list;
        this->_node = list->_head;
    }

    template <class Datatype>
    inline DoubleListIterator<Datatype>::DoubleListIterator(DoubleLinkedList<Datatype>& list)
    {
        this->_list = &list;
        this->_node = list._head;
    }

    template <class Datatype>
    void DoubleListIterator<Datatype>::start()
    {
        if(this->_list != nullptr)
        {
            this->_node = this->_list->_head;
        }
    }

    template <class Datatype>
    void DoubleListIterator<Datatype>::forth()
    {
        if(this->_node != nullptr)
        {
            this->_node = this->_node->_next;
        }
    }

    template <class Datatype>
    Datatype& DoubleListIterator<Datatype>::item()
    {
        return this->_node->_data;
    }

    template <class Datatype>
    bool DoubleListIterator<Datatype>::isValid()
    {
        return this->_node != nullptr;
    }

    template <class Datatype>
    bool DoubleListIterator<Datatype>::hasNext()
    {
        return this->_node != nullptr && this->_node->_next != nullptr;
    }

    template <class Datatype>
    bool DoubleListIterator<Datatype>::hasPrevious()
    {
        return this->_node != nullptr && this->_node->_prev != nullptr;
    }

    template class DoubleListIterator<int>;
}