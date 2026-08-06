#include <iostream>

int printDouble(){

  int num {};

  std::cout << "Enter a integer: ";
  std::cin >> num;

  return num;


}

void outputLine(int value){

   std::cout << "doubled is: " << value * 2;


}


int main(){


outputLine(printDouble());



  return 0;


}