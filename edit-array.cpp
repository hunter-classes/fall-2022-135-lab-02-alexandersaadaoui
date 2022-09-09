#include <iostream>

int main() {
	int myData[10];
    int i;
    int v;

	for (int count = 0; count < 10; count++){
		myData[count] = 1;
		std::cout << myData[count] << " ";
	}
	
    std::cout << std::endl;
	
    do{
		std::cout << "Input index: ";
		std::cin >> i;
		std::cout << "Input value: ";
		std::cin >> v;

		if (i >= 0 && i < 10){
			myData[i] = v;
			for (int n = 0; n < 10; n++){
				std::cout << myData[n] << " ";
			}
			std::cout << std::endl;
		}
		else{
			std::cout << "Index out of range. Exit." << std::endl;
		}
	} while (i >= 0 && i < 10);
	
    return 0;
}