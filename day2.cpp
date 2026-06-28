#include <iostream>
#include <string>
#include <utility>

class Animal
{
    private:
        int x; 
        int y; 
        int z;
        int *p; 

    public:
        Animal(int x,int y,int z,int *p):x(x),y(y),z(z),p(p){}
        Animal(const Animal& ref)
        {
            x = ref.x; 
            y = ref.y; 
            z = ref.z; 
            p = ref.p; 
        }
        void Move()
        {
            std::cout << x << " Is " << y << " Is " << z << std::endl; 
            return; 
        }
        void Tell()
        {
            std::cout << *p << std::endl; 
            return; 
        }
};

class str
{
    public:
        // copy constructor
        str(const str& ref)
        {
            std::cout << "Copied !" << std::endl; 
            x = new int(*ref.x); 
            y = ref.y; 
        }
        
        // move constructor
        str(str&& ref)
        {
            std::cout << "Moved !" << std::endl; 
            x = ref.x; 
            y = ref.y; 

            // making the variables nullptr 
            ref.x = nullptr; 
            ref.y = 0; 
        }
        str(int *x,int y): x(x),y(y){}

        void PrintValue()
        {
            std::cout << *x << y << std::endl; 
            return; 
        }
        void Getter()
        {
            std::cout << "x: " << *x << " y: " << y << std::endl; 
            return; 
        }
        ~str()
        {
            std::cout << "deleted the pointer" << std::endl; 
            delete x; 
        }
    private:
        int *x; 
        int y; 
};

class thisP
{
    public:
        thisP(int x,int y):x(x),y(y){}
        thisP(const thisP& ref)
        {
            x = ref.x; 
            y = ref.y; 
            std::cout << "the lvalue constructor has been activited !!" << std::endl; 
        }
        thisP& PrintValue()
            {
                std::cout << "Value: " << this << std::endl; 
                return *this; 
            }
        void Value()
            {
                std::cout << "x: " << x << " y:" << y << std::endl; 
                return; 
            }
        void Change(int x)
            {
                this->x = x; 
                return; 
            }
    private:
        int x; 
        int y;
};

class Player
{
    public:
        Player(int x,int y): x(x), y(y){}

        Player& Move()
            {
                std::cout << "Moved.." << std::endl; 
                return *this; 
            }
        Player& Attack()
            {
                std::cout << "Attacked.." << std::endl; 
                return *this; 
            }
        Player& Eat()
            {
                std::cout << "Eating.." << std::endl; 
                return *this; 
            }
        Player Simple()
            {
                std::cout << "Working ?? " << std::endl; 
                return *this; 
            }

        void PrintValue()
            {
                printf("%d %d\n",x,y);
                return;  
            }
        void Change(int x, int y) 
        {
            this->x = x; 
            this->y = y; 
            return; 
        }
    private:
        int x;
        int y;
};


int func(int y)
{
    static int x = 0; 
    std::cout << x << std::endl; 
    x++;
    return 0; 
}


class Test
{
    public:
        Test(int x, int y): x(x), y(y){}
        void Increment()
            {
                this->z++; 
                return; 
            }
    
        void PrintValue()
            {
                std::cout << this->z << std::endl; 
                return; 
            }

    private:
        static int z; 
        int x; 
        int y;
};

int Test::z = 0; 

class Testing 
{
    public:
        Testing(int x): x(x){}
        int Make(int x) const 
        {
            std::cout << this->x << std::endl; 
            return 1; 
        }
    private:
        int x; 
};

int main()
{
    Testing a(10); 
    a.Make(1); 
    return 0;
}