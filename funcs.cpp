#include "funcs.h"
#include <iostream>

void print_interval(int L, int U){
    for (int count = L; count < U; count++){
        std::cout << count << " ";
    }
}