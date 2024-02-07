#include "DoubleLinkedList.hpp"
#include "DoubleListIterator.hpp"

namespace Data
{
    template<class Datatype>
    inline DoubleLinkedList<Datatype>::DoubleLinkedList()
    {
        this->_head = nullptr;
        this->_tail = nullptr;
        this->_count = 0;
    }

    template<class Datatype>
    inline DoubleLinkedList<Datatype>::~DoubleLinkedList()
    {
        DoubleNode<Datatype>* iterator = this->_head;
        DoubleNode<Datatype>* next;
        while(iterator != nullptr)
        {
            next = iterator->_next;
            delete iterator;
            iterator = next;
        }
    
    }

    template<class Datatype>
    void DoubleLinkedList<Datatype>::append(Datatype data)
    {
        if(this->_tail == nullptr)
        {
            this->_head = this->_tail = new DoubleNode<Datatype>(data);
        } 
        else
        {
            this->_tail->insertAfter(data);
            this->_tail = this->_tail->_next;
        }

        this->_count++;
    }

    template<class Datatype>
    void DoubleLinkedList<Datatype>::prepend(Datatype data)
    {
        if(this->_head == nullptr)
        {
            this->_tail = this->_head = new DoubleNode<Datatype>(data);
        }
        else
        {
            this->_tail->insertBefore(data);
            this->_tail = this->_head->_prev;
        }

        this->_count++;
    }
    
    template<class Datatype>
    void DoubleLinkedList<Datatype>::insertAfter(DoubleListIterator<Datatype>& itr, Datatype data)
    {
        if(itr._list != this) { return; }
        if(itr._node != nullptr)
        {
            itr._node->insertAfter(data);
            if(itr._node == this->_tail)
            {
                this->_tail = itr._node->_next;
            }
            this->_count++;
        }
        else
        {
            this->append(data);
        }
    }

    template<class Datatype>
    void DoubleLinkedList<Datatype>::insertBefore(DoubleListIterator<Datatype>& itr, Datatype data)
    {
        if(itr._list != this) { return; }
        if(itr._node != nullptr)
        {
            itr._node->insertBefore(data);
            if(itr._node == this->_tail)
            {
                this->_tail = itr._node->_prev;
            }
            this->_count++;
        }
        else
        {
            this->prepend(data);
        }
    }

    template<class Datatype>
    void DoubleLinkedList<Datatype>::removeHead()
    {
        DoubleNode<Datatype>* node = nullptr;
        if(this->_head != nullptr)
        {
            node = this->_head->_next;
            delete this->_head;
            this->_head = node;
            
            // If head is null, last node was deleted
            // so also set tail at null
            if(this->_head == nullptr)
            {
                this->_tail = nullptr;
            }
            this->_count--;
        }
    }

    template<class Datatype>
    void DoubleLinkedList<Datatype>::removeTail()
    {
        DoubleNode<Datatype>* node = this->_head;
        if(this->_head != nullptr)
        {
            if(this->_head == this->_tail)
            {
                delete this->_head;
                this->_head = this->_tail = nullptr;
            }
        } 
        else
        {
            // skip until find the tail
            while(node->_next != this->_tail)
            {
                node = node ->_next;
            }

            this->_tail = node;
            delete node->_next;
            node->_next = nullptr;
        }
        this->_count--;
    }

    template<class Datatype>
    void DoubleLinkedList<Datatype>::remove(DoubleListIterator<Datatype>& itr)
    {
        DoubleNode<Datatype>* node = this->_head;
        // Itr doesn't belong to this list
        if(itr._list != this) { return; }

        // Itr node isn't valid
        if(itr._node == nullptr) { return; }

        if(itr._node == this->_head)
        {
            itr.forth();
            this->removeHead();
        }
        else
        {
            // Find prior node of itr node
            while(node->_next != itr._node)
            {
                node = node->_next;
            }
            itr.forth();

            if(node->_next == this->_tail)
            {
                this->_tail = node;
            }

            
            delete node->
            _next;
            node->_next = itr._node;
        }
    }

    template <class Datatype>
    DoubleListIterator<Datatype> DoubleLinkedList<Datatype>::getIterator()
    {
        return DoubleListIterator<Datatype>(this);
    }


    template class DoubleLinkedList<int>;
}