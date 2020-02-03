
#include<iostream>

template<class T>

int length(T& arr)
{
    return sizeof(arr) / sizeof(arr[0]);
}

int main()
{
    int arr[] = { 1,5,9,10,9,2 };
    char ar[]= "HelloWorld";
    float a[] = { 1.1, 2.3, 3.4, 5.5, 9.2 };
    std::cout << "the size of a non-dynamic array is " << length(arr) << std::endl;
    std::cout << "the size of a non-dynamic array is " << length(ar) << std::endl;
    std::cout << "the size of a non-dynamic array is " << length(a) << std::endl;
    return 0;
}