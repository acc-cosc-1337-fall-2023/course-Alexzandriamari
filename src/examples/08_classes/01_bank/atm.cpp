//atm.cpp
#include "atm.h"

int main() 
{			
	if (login()) 
    {
		
		int isNotFinished = true;

		do 
        {
			
			switch (getUserOption())
			 {
				case 1:
					viewBalance();
					break;
				case 2:
					withdrawCash();
					break;
				case 3:
					depositFunds();
					break;
				case 4:
					isNotFinished = false;
					break;
				default:
					cout << "Invalid option! Try again." << endl;
					break;
			}

		} 
        while (isNotFinished);

	}

	return 0;

}
