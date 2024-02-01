#ifndef _DOUBLENODE_HPP_
#define _DOUBLENODE_HPP_

namespace Data {
    template<class Datatype>
    class DoubleNode
    {
        public:
        Datatype _data;
        DoubleNode<Datatype>* _next;
        DoubleNode<Datatype>* _prev;

        DoubleNode();
        DoubleNode(Datatype data);
        ~DoubleNode();

        void insertAfter(Datatype data);
        void insertBefore(Datatype data);
    };
}


#endif // _DOUBLENODE_HPP_