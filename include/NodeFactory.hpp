#ifndef _NODE_FACTORY_HPP_
#define _NODE_FACTORY_HPP_

#include "SimpleNode.hpp"

namespace Data
{
    template <class T>
    class NodeFactory {
    public:
    static SimpleNode<T>* createNode(T data) {
        return new DoubleNode<T>(data);
    }
    };
}

#endif // _NODE_FACTORY_HPP_