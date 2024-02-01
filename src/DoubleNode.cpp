#include "DoubleNode.hpp"

namespace Data
{
    template<class Datatype>
    inline DoubleNode<Datatype>::DoubleNode()
    {
        this->_data = Datatype(0);
        this->_next = nullptr;
    }

    template<class Datatype>
    inline DoubleNode<Datatype>::DoubleNode(Datatype data)
    {
        this->_data = data;
        this->_next = nullptr;
    }

    template<class Datatype>
    inline DoubleNode<Datatype>::~DoubleNode()
    {
        this->_next = nullptr;
        this->_prev = nullptr;
    }

    template<class Datatype>
    void DoubleNode<Datatype>::insertAfter(Datatype data)
    {
        DoubleNode<Datatype>* newDoubleNode = new DoubleNode<Datatype>(data);
        newDoubleNode->_next = this->_next;
        newDoubleNode->_prev = this;
        this->_next = newDoubleNode;

        if(newDoubleNode-> != nullptr)
        {
            newDoubleNode->_next->_prev = newDoubleNode;
        }
    }

    
    template<class Datatype>
    void DoubleNode<Datatype>::insertBefore(Datatype data)
    {
        DoubleNode<Datatype>* newDoubleNode = DoubleNode<Datatype>(data);
        newDoubleNode->_prev = this->_prev;
        newDoubleNode->_next = this;
        this->_prev = newDoubleNode;

        if(newDoubleNode->_prev != nullptr)
        {
            newDoubleNode->_prev->_next = newDoubleNode;
        }

    }

    template class DoubleNode<int>;
}