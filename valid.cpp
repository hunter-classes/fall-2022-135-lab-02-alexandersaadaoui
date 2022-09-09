#include <iostream>


int main(){
    int number;
    std::cout << "Please enter an integer: ";
    std::cin >> number;

    while (number <= 0 || number >= 100){
        std::cout << "Please re-enter: ";
        std::cin >> number;
    }

    std::cout << "Number squared is " << number*number << std::endl;
    return 0;

}