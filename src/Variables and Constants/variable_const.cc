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
    std::string a = "Name"; // 32 bytes 
    constexpr int h = 10*200;  
   

    PrintSize(x); // this is a datatype of integer, the size of the variable is 4 bytes  
                  // for all integer (int) datatype the size will be 4 bytes  
   PrintSize(y); // todo - write this. 
   PrintSize(z); 
   PrintSize(b); 
   PrintSize(c); 
   PrintSize(d); 
   PrintSize(e); 
   PrintSize(a); 
   PrintSize(h); 
}