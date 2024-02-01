#ifndef _SIMPLENODE_HPP_
#define _SIMPLENODE_HPP_

namespace Data {
    template<class Datatype>
    class SimpleNode
    {
        public:
        Datatype _data;
        SimpleNode<Datatype>* _next;

        SimpleNode();
        SimpleNode(Datatype data);
        ~SimpleNode();

        void insertAfter(Datatype data);
        
    };
}


#endif // _SIMPLENODE_HPP_