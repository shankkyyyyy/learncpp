#include <iostream>
#include <string>
using namespace std; 

int BackInt(std::string num,int Index)
{
    return 1;
}

void findLargestOddSubstring(string num) {
    int OddNum{0};
    int Num = stoi(num); 
    if (Num % 2 != 0)
    {
        std::cout << Num << std::endl; 
        return; 
    }
    // 1287
    int Value = 0; 
    int index = -1;
    for (int i = 0; i < num.length(); i++)
    {
        if (Value % 2 != 0)
        {
            index = Value;
        }
        int v = num[i] - '0'; 
        Value = Value * 10 + v; 
    }
    std::cout << index << std::endl; 
    
}

int main()
{
    std::string Name = "987654321";
    //for (int i = Name.length() - 1; i >= 0; i--)
    //{
      //  std::cout << Name[i] << std::endl; 
   // } 
    findLargestOddSubstring(Name); 
    return 0; 
}