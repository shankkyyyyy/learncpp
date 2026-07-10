#include <iostream>

class Animal
{
    // protected attributes
    protected:
        std::string AnimalName; 
        std::string AnimalBreed; 
        int AnimalAge; 

    public:
        // constructor
        Animal(std::string Name = "Default",std::string breed = "default",int age = 0): AnimalName(Name),AnimalBreed(breed),AnimalAge(age){}
        // default constructor for child class's
        virtual void Eat()
        {
            std::cout << AnimalName << ", Is Eating Food." << std::endl; 
            return;  
        }
        void ShowData()
            {
                std::cout << "AnimalName: " << AnimalName << "\n" << "AnimalBreed: " << AnimalBreed << "\n" << "AnimalAge: " << AnimalAge << std::endl; 
                return;
            }
        virtual ~Animal() = default; 
};

class Dog : public Animal 
{
    protected:
        bool HasTail; 
    public:
        using Animal::Animal; 
        void Eat() override {
            std::cout << AnimalName << ", Is Eating Dog Food" << std::endl; 
            return; 
        } 
        void Bark(){
            std::cout << AnimalName << ", Is Barking" << std::endl; 
            return; 
        }
        ~Dog() = default; 
};

int main()
{
    Dog danny("Dog","Golden retriver",10); 
    danny.Bark(); 
    danny.Eat(); 
    return 0; 
}