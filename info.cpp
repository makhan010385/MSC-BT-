#include <iostream.h>
 
class info
{
    // Access specifier
    public:
  
    // Data Members
    string name;
  
    // Member Functions()
    void printname()
    {
       cout << "name is: " << name;
    }
};
  
int main() {
  
    // Declare an object of class geeks
    info obj1;
  
    // accessing data member
    obj1.name = "MSC(BT)";
  
    // accessing member function
    obj1.printname();
    return 0;
}