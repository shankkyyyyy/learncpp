#include <iostream>
#include <string>
#include <cmath>

class Animal
{
	private:
		int x; 
		int y; 
		int z; 
	public:
		Animal() = default;
		Animal(int thisx,int thisy,int thisz): x(thisx),y(thisy),z(thisz){}
		Animal(std::string name): Animal(12,12,12){}
		void Eat()
			{
				std::cout << "The Animal is Eating" << std::endl; 
				return; 
			}
		void Move()
			{
				std::cout << "The Animal is Moving" << std::endl; 
				return;
			}
		void Greet()
			{
				std::cout << "The Animal is Greeting you !!" << std::endl; 
				return; 
			}
		void Attr()
			{
				std::cout << x << y << z << std::endl; 
				return; 
			}

		~Animal(){return;} 
};

int main()
{
	Animal a; 
	Animal b = {10,20,30}; 
	Animal c = {"nioahl"}; 
	Animal Copy_a = b; 
	Copy_a.Attr();  	
	return 0;
}