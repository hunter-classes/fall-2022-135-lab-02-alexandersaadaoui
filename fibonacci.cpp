#include <iostream>

int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for(int count = 2; count < 60; count++){
        fib[count] = fib[count-1] + fib[count-2];
    }

    for(int count2 = 0; count2 < 60; count2++){
        std::cout << fib[count2] << std::endl;
    }

    return 0;
}

/*Negative numbers are appearing.*/
