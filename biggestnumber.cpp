//Author:
#include<iostream>

int main()
{
  int number1;
  int number2;        
  int biggest;
  //declare variables here

  std::cout<<"Please enter a whole number:\n";
  std::cin>>number1;
 
  //get first input using std::cin>>

  std::cout<<"Please enter another whole number:\n";
  std::cin>>number2;
  //get second input using std::cin>> again with a second variable

  //determine if first or second is bigger and store that in a third variable
 if(number1 < number2)
 {
         std::cout<<"Of those two numbers, the biggest is: ";
         std::cout<<number2;
 }
 else
 {
  std::cout<<"Of those two numbers, the biggest is: ";
  std::cout<<number1;
 }
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
