// declare global variable  
#include <iostream.h>  
#include<conio.h>

int num = 50;  
void main ()  
{  
// declare local variable   
int num = 100;  
  
// print the value of the variables  
cout << " The value of the local variable num: " << num;  
  
// use scope resolution operator (::) to access the global variable   
cout << "\n The value of the global variable num: " << ::num;   
getch() ; 
} 
