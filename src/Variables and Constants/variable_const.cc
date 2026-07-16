#include <iostream>

template <typename T>
void PrintSize(T a)
{
    std::cout << "SizeOf: " << sizeof(a) << std::endl; 
    return ; 
}

int main()
{
    int x{0}; // 4 bytes 
    float y{0}; // 4 bytes 
    double z{0}; // 8 bytes 
    char b = 'a'; // 1 byte 
    bool c = true; // 1 byte
    short int d = 0; // 2 bytes 
    long long e = 0; // 8 bytes  
    std::string a = "Name"; 

   PrintSize(x); 
   PrintSize(y); 
   PrintSize(z); 
   PrintSize(b); 
   PrintSize(c); 
   PrintSize(d); 
   PrintSize(e); 
   PrintSize(a); 
}