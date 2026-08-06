#include <iostream>

int main(){
int userNumber{};

std::cout << "enter an integer: " ;

std::cin >> userNumber;

std::cout << "Double that number is: " << userNumber * 2 << '\n';
std::cout << "Triple that number is: " << userNumber * 3 ;

return 0;

}