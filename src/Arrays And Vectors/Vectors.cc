#include <iostream>
#include <vector>

template <typename T>
class MyVector
{
  
    public:
        T elements; 
        int size; 
        T* Array;
    MyVector(T a): elements(a){
        try
        {
            Array = new T[a]; 
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    } 
    // range based loop 
    int* begin()
    {
        return &Array[0]; 
    }
    int* end()
    {
        return &Array[elements]; 
    }

    T& operator [](int Index)
    {
        if (Index > elements)
        {
            std::cout << "Out Of Bounds" << "\n"; 
            throw std::out_of_range("Vector index out of bounds!");
        }
        return &Array[Index]; 
    }

    ~MyVector()
    {
        delete[] Array; 
    }
    
    
};

int main()
{
    MyVector<int> a(10);
    for(auto& c: a)
    {
        std::cin >> c; 
    }
    for (auto c : a)
    {
        std::cout << c << "\n"; 
    } 
    return 0; 
}