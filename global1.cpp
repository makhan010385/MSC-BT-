#include<iostream.h>
#include<conio.h>
 
class A 
{
public: 
  
   // Only declaration
   void fun();
};
  
// Definition outside class using ::
void A::fun()
{
   cout << "fun() called";
}
  
int main()
{
   A a;
   a.fun();
   return 0;
}
