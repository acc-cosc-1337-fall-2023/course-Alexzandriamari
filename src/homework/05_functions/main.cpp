#include<iostream>
#include<string>
#include<func.h>


int main() 
{
	std::cout << "Options:" <<std::endl;
	std::cout << "1. Calculate the GC Content" << std::endl;
	std::cout << "2. Get GC Complement" << std::endl;

	int choice;
	std::cout << "Enter 1 or 2 to select an option: ";
	std::cin >> choice;

	std::string dna;
	std::cout << "Enter DNA String: ";
	std::cin >> dna;

	switch (choice) 
	{
		case 1:
		std::cout << "GC Content: " <<get_gc_content(dna) << std::endl;
		break;
		case 2: 
		std::cout << "GC Complement " <<get_dna_complement(dna) << std::endl;
		break;
		default:
		std::cout << "Incalid choice, please enter 1 or 2" << std::endl;
		break;
	}

	return 0;
}
