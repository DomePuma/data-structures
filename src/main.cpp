#include <iostream>
#include "Array.hpp"
#include "LinkedList.hpp"
#include "ListIterator.hpp"

using namespace Data;

template<class Datatype>
void displayArray(Array<Datatype>& array);

template<class Datatype>
void displayList(LinkedList<Datatype>& list);

int main()
{
    
    //Array<int> arrayInt(5);
    // Array<float> arrayFloat(10);

    // displayArray(arrayInt);
    // //displayArray(arrayFloat);

    //arrayInt[0] = 12;

    // displayArray(arrayInt);

    // arrayInt.resize(3);

    // arrayInt.insert(2,1);

    // displayArray(arrayInt);

    // arrayInt.remove(1);

    // displayArray(arrayInt);
    //displayList(arrayInt);
    
    return 0;
}

template<class Datatype>
void displayArray(Array<Datatype>& array)
{
    std::cout << "[ ";
    for(int i = 0; i < array._size; i++)
    {
        std::cout << array._array[i] << " ";
    }
    std::cout <<  "]" << std::endl;
};

template<class Datatype>
void displayList(LinkedList<Datatype>& list)
{
    auto itr = list.getInterator();
    while(itr.hasNext())
    {
        std::cout << itr.item() << " ->";
        itr.Next();
    }
    std::cout << std::endl;
};