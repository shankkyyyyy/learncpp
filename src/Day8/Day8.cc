#include <iostream>

template<typename T>
class UniquePointers
{
    private:
        T *MemberVariable = nullptr; 
    public:
    // Constructors and Deconstructors
        
        // default constructor 
        explicit UniquePointers() : MemberVariable(nullptr){} 
        
        explicit UniquePointers(T MemberVariable){
            this->MemberVariable = new T(MemberVariable);  
        }

        
        explicit UniquePointers(T* MemberVariable){
            this->MemberVariable = MemberVariable; 
        }

        // move constructor 
        explicit UniquePointers(UniquePointers&& Object){
            std::cout << "Move COnstructor Called." << std::endl; 
            this->MemberVariable = Object.MemberVariable; 
            Object.MemberVariable = nullptr; 
        }

        // destructor 
        ~UniquePointers(){
            delete this->MemberVariable; 
        }

        // function Changes The MemberVariable; 
        void Change(T MemberVariable){
            delete this->MemberVariable; 
            this->MemberVariable = nullptr;
            this->MemberVariable = new T (MemberVariable); 
            std::cout << *this->MemberVariable << std::endl; 
            return;  
        }

        void Print() const {
            std::cout << *this->MemberVariable << std::endl; 
            return;
        }
        T& operator*()
        {
            return *this->MemberVariable; 
        }
};

int main()
{
    UniquePointers<int> a(10); 
    UniquePointers<float> b (12.1);
    std::cout << *a << std::endl;     
    return 0;
}