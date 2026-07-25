#include <iostream>
#include <vector>
using namespace std;

// =============================|
// For Testing Call-By-Reference|
// =============================|
/*
    Function for adding Reference Values 
*/
int AddValues(int &a,int &b)
{
    return a + b; 
}

// ===================================|
// For testing Call-By-Const Reference|
// ===================================|
/*
    Returns 5th element from vector
*/
int IndexFifth(std::vector<int>const& a)
{
    return a[5]; 
}

/*
`  Functons For Handling Both Lvalues And Rvalues 
`  Used for overloading Functions 
*/

void SayHello(const std::string& Hello)
{
    cout << Hello << endl; 
    return ;
}
void SayHello(const std::string&& Hello)
{
    cout << Hello << endl; 
    return;
}


// main function 
int main()
{
    //|------------------------------|
    //| For testing Call-By-Reference| 
    //|------------------------------|
    /*
    int a{10};
    int b{20}; 
    int c = AddValues(a,b); 
    cout << "A: " << a << " B: " << b << " C: " << c << endl;  
    */

    //------------------------------------|
    // For Testing Call-by-Const-Reference|
    //------------------------------------|
    /*
    std::vector<int> VecArray = {1,2,3,4,5,6,7,8,9}; 
    int Value = IndexFifth(VecArray);
    cout << Value << endl;  
    */ 

    std::string Hello = "Hello, World By lvalue"; 
    SayHello(Hello); 
    SayHello("Hello, World by rvalue");

    return 0; 
}