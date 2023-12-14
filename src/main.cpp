#include <iostream>
#include "Array.hpp"

using namespace Data;


template<class Datatype>
void displayArray(Array<Datatype>& array);


int main()
{
    
    Array<int> arrayInt(5);
    Array<float> arrayFloat(10);

    displayArray(arrayInt);
    //displayArray(arrayFloat);

    arrayInt[0] = 12;

    displayArray(arrayInt);

    arrayInt.resize(3);

    arrayInt.insert(2,1);

    displayArray(arrayInt);

    arrayInt.remove(1);

    displayArray(arrayInt);
    
    
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
}