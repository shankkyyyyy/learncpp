#include <iostream>


/*
    This is just a snippet code for Array 
    this is only for demostrating purposes 
    LEARNING ARRAY'S AND VECTORS DEEPLY

*/

template <typename T>
class MyArray
{
    public:
        int size; 
        int elements;
        T* Array; 
        
        MyArray(int elements) : elements(elements){
            Array = new T(elements); 
        }
        T* begin()
        {
            return &Array[0]; 
        }
        T* end()
        {
            return &Array[elements];
        }

        T& operator[](int index)
        {
            return Array[index]; 
        }
};

int main()
{
    MyArray<int> a(10); 
    a[0] = 10; 
    a[1] = 20; 
    a[2] = 30;
    for (auto i : a)
    {
        using namespace std; 
        cout << i << endl; 
    } 
    return 0;
}