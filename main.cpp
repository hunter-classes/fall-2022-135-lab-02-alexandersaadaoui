#include "funcs.h"
#include <iostream>

int main(){
    int L;
    int U;

    std::cout << "Please enter L: ";
    L = -5;
    std::cout << L << std::endl;

    std::cout << "Please enter U: ";
    U = 10;
    std::cout << U << std::endl;
    
    print_interval(L,U);

    std::cout << std::endl;
    return 0;
}