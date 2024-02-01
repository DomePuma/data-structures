#include "SimpleNode.hpp"

namespace Data
{
    template<class Datatype>
    inline SimpleNode<Datatype>::SimpleNode()
    {
        this->_data = Datatype(0);
        this->_next = nullptr;
    }

    template<class Datatype>
    inline SimpleNode<Datatype>::SimpleNode(Datatype data)
    {
        this->_data = data;
        this->_next = nullptr;
    }

    template<class Datatype>
    inline SimpleNode<Datatype>::~SimpleNode()
    {
        this->_next = nullptr;
    }

    template<class Datatype>
    void SimpleNode<Datatype>::insertAfter(Datatype data)
    {
        SimpleNode<Datatype>* newNode = new SimpleNode<Datatype>;
        newNode->_data = data;
        newNode->_next = this->_next;
        this->_next = newNode;
    }

    template class SimpleNode<int>;
}