//write include statements
#include<iostream>
#include<repetition.h>

//write using statements

int main() 
{
	int choice;
	do 
	{
//creating the menu list
		std::cout << "Menu:" << std::ends;
		std::cout << "1 - Factorial" << std::ends;
		std::cout << "2 - GCD" << std::ends;
		std::cout << "3 - Exit" << std::ends;
//asking for user input
		std::cout << " Enter your choice: ";
		std::cin >> choice;

		switch (choice) 
		{
			case 1: // calling factorial func 
				break;
			case 2: //calling gcd func 
				break;
			case 3: 
				char confirm;
				std::cout << "are you sure you want to exit?? (y/n): ";
				std::cin >> confirm; 
				if (confirm == 'y' || confirm == 'Y')
				{
					std::cout << "exiting program . . . " << std::ends;
					exit(0); //ending program 
				}
					break;
					default:
						std::cout << "invalid choice, please try again." << std::ends;
						break;
		}
	
	} while (choice != 3);

	return 0;
}

