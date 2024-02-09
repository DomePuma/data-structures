// #include "Tree.hpp"

// namespace Data
// {
//     template<class Datatype>
//     inline Tree<Datatype>::Tree()
//     {
//         this->_data = Datatype(0);
//         this->_parent = nullptr;
//         this->_children = new DoubleLinkedList<Node*>();
//     }

//     template<class Datatype>
//     inline Tree<Datatype>::~Tree()
//     {
//         this->destroy();
//     }

//     template<class Datatype>
//     int Tree<Datatype>::count()
//     {
//         int cpt = 1;
//         DoubleListIterator<Node*> itr = this->_children.getIterator();
//         for(itr.start(); itr.isValid(); itr.forth())
//         {
//             cpt += itr.item()->count();
//         }

//         return cpt;
//     }

//     template<class Datatype>
//     void Tree<Datatype>::destroy()
//     {
//         DoubleListIterator<Node*> itr(this->_children);
//         Node* node = nullptr;
//         itr.start();
//         while(itr.isValid)
//         {
//             node = itr.item();
//             this->_children.remove(itr);
//             delete node;
//             itr.forth();
//         }
//     }

//     template class Tree<int>;
// }