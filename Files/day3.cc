#include <iostream>
#include <stdio.h>

class Animal
{
    public:
        Animal(int x): x(x){}
        void Print()
            {
                printf("%d\n",x); 
                return; 
            }
        Animal operator + (const Animal& ref)
            {
                return Animal(x + ref.x); 
            }
        
        Animal operator - (const Animal& ref)
            {
                return Animal(x - ref.x + y); 
            }


    private:
        int x; 
        int y = 10; 
};
class M
{
    public:
        M(int x): x(x){}
        friend std::ostream& operator << (std::ostream& out,const M& ref)
        {
            out << ref.x; 
            return out; 
        }
        
    private:
        int x; 
};

int main()
{
    M x(10); 
    std::cout << x << std::endl; 
    return 0;
}