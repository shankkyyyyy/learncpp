#include <iostream>

typedef struct Animal
{
    int x; 
    int y; 
    void Print()
        {
            std::cout << "Hello, World!!" << std::endl; 
            return;   
        }
} Animal; 

typedef struct Bird
{
    int Name; 
    int X;
} Bird; 

typedef struct Dog
{
    Animal x; 
    Bird bird; 
    int cs; 
} Dog; 

int PrintData(Animal* A)
{
    std::cout << A->x << "\n" << A->y << std::endl; 
    return 1; 
}

int PrintData(Bird* C)
{
    std::cout << C->X << " <- X value" << std::endl; 
    return 0;
}

int main()
{
    Dog A; 
    Animal* B = (Animal*)&A; 
    Bird* c = (Bird*)&A;
    PrintData(B); 
    PrintData(c); 
    return 0; 
}