#include <iostream>
#include <string>


int getValue(){
  int x{};

  std::cout << "Enter integer: ";
  std::cin >> x;

  return x;

}

int main()
{
	int num1{getValue()};
  int num2{getValue()};

  std::cout << num1 << " + " << num2 <<  " is: " << num1 + num2 << '\n';
  std::cout << num1 << " - " << num2 <<  " is: " << num1 - num2;


	return 0;
}