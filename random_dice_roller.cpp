#include <iostream>
#include <ctime>

int main() {
    int dice;
    int choice;
    
    srand(time(0));  // Seed the random number generator changes every time you roll the dice
    std::cout << "********** Dice roller **********" << std::endl;
    std::cout << "This program generates a random number between 1 and 6." << std::endl;
    
    
    
    do {
		
		std::cout << "1. Roll the dice" << std::endl;
		std::cout << "2. Exit " << std::endl;
		
		std::cout << "Enter your choice: ";
		std::cin >> choice;
    	
		switch (choice) {
			case 1:
				dice = rand() % 6 + 1;  // Generate a random number between 1 and 6
				std::cout << "You rolled: " << dice << std::endl;
				break;
			case 2:
				std::cout << "Exiting thanks for playing!" << std::endl;
				break;
			default:
				std::cout << "Invalid Choice! Try again" << std::endl;
		}
    	
	}while (choice == 1);
    
    
    return 0;
}