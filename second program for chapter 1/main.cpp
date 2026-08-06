#include <iostream>

int main(){
int firstNumber{};
int secondNumber{};

std::cout << "enter the first integer: " ;

std::cin >> firstNumber;

std::cout << "enter the second integer: " ;

std::cin >> secondNumber;

std::cout << firstNumber <<  " + " << secondNumber << " is " << firstNumber + secondNumber << '\n';
std::cout << firstNumber <<  " - " << secondNumber << " is " << firstNumber - secondNumber << '\n';

return 0;

}