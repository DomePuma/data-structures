#ifndef _TREE_HPP_
#define _TREE_HPP_

#include "DoubleLinkedList.hpp"

namespace Data
{
    template<class Datatype>
    class Tree
    {
        public:
        typedef Tree<Datatype> Node;
        
        Datatype _data;
        Node* _parent;
        DoubleLinkedList<Node*> _children;

        Tree();
        ~Tree();

        int count();
        void destroy();
    };
}

#endif // _TREE_HPP_