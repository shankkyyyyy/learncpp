#include <iostream>

class Animal{
    public:
        Animal(int x,int y,int z): x(x), y(y), z(z){}
        /*/
        Animal()
        {
            this->x = 0; 
            this->y = 0; 
            this->z = 0; 
        }
        /*/ 
        void virtual PrintHello()
            {
                std::cout << "Hello, I am a normal animal." << std::endl; 
                return; 
            }
        void SayHello()
            {
                std::cout << "Hello, By animal!" << std::endl; 
                return ;
            }

    protected: 
        int x = 0; 
        int y = 0;
        int z = 0; 
};

class Cat: public Animal
{
    public:
        Cat(int variable): Animal(1,1,1),foo(variable){}
        void SayHello()
            {
                std::cout << "Hello by Dog." << std::endl; 
                return; 
            }
        void PrintHello() override 
            {
                std::cout << "Hello, By your dog Stephen" << std::endl; 
                return; 
            }
    private:
        int foo = 0; 
}; 

int main()
{
    Cat foo(10); 
    Animal boo(10,10,10); 
    boo.PrintHello(); 
    foo.PrintHello();
    foo.SayHello(); 
    boo.SayHello(); 
    return 0; 
}