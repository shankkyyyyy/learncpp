#include <iostream>

class Animal{
    public:
        Animal(int x) : x(x){}
        //Animal()
        //{
          //  x = 10; 
        //}

        int PrintHello()
            {
                std::cout << x << std::endl; 
                return 0; 
            }

    private:
        int x; 
};

class Dog: public Animal
{
    public:
        Dog(const Animal& ref)
        {
            ref
        }
        void Print()
            {
                std::cout << "Hello, World!" << std::endl; 
                return; 
            }
    private:
            int x; 
};

int main()
{
    Dog a; 
    a.Print();
    a.PrintHello();
    return 0; 
}