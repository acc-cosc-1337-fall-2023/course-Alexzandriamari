//atm.h

#include<iostream>
using namespace std;

int accountNumber =12345;
int pinNumber = 54321;
int balance = 0;

bool login () 
{
    int givenAccountNumber = -1;
    int givenPinNumber = -1;
    bool isAccountInvalid = true; 
    bool isPinInvalid = true;

	cout << "for programs sake, example account number and pin are: " << endl;
	cout << "account number: 12345 :: pin: 54321" << endl;

    cout << "Welcome to Wells Fargo!" << endl;

    while (isAccountInvalid)
    {
        cout << "Please enter account number: ";
        cin >> givenAccountNumber;
        
        if (givenAccountNumber == accountNumber)
        {
            isAccountInvalid = false; 
        } else 
        {
            cout << "invalid account number, please try again!" << endl;
        }
    }
    while (isPinInvalid)
    {
        cout << "enter your PIN: ";
        cin >> givenPinNumber;

        if (givenPinNumber == pinNumber)
        {
            isPinInvalid = false; 
        } else
        {
            cout << "invalid pin number, please try again!" << endl;
        }
    }
    return true;
}

int getUserOption () {

	int selectedOption = -1;

	cout << "Main menu:" << endl;
	cout << "	1 - View my balance" << endl;
	cout << "	2 - Withdraw cash" << endl;
	cout << "	3 - Deposit funds" << endl;
	cout << "	4 - Exit" << endl;
	cout << "Enter a choice: " << endl;
	cin >> selectedOption;
	
	return selectedOption;
	
}

void viewBalance ()
{
    cout << "Balance:" << endl;
    cout << "$" << balance << endl;
}

void withdrawCash() 
{
	
	int selectedOption = -1;
	int valueToWithdraw = 0;
	bool isNotFinished = true;

	do {
		
		cout << "Withdrawal options:" << endl;
		cout << "1 - $20" << endl;
		cout << "2 - $40" << endl;
		cout << "3 - $60" << endl;
		cout << "4 - $100" << endl;
		cout << "5 - $200" << endl;
		cout << "6 - cancel transaction" << endl;
		cout << "choose a withdrawal option (1-6)" << endl;

		cin >> selectedOption;
		switch (selectedOption) {
			case 1:
				valueToWithdraw = 20;
				break;
			case 2:
				valueToWithdraw = 40;
				break;
			case 3:
				valueToWithdraw = 60;
				break;
			case 4:
				valueToWithdraw = 100;
				break;
			case 5:
				valueToWithdraw = 200;
				break;
			case 6:
				isNotFinished = false;
				break;
			default:
				cout << "Invalid option! Try again." << endl;
				break;
		} 
		
		if (valueToWithdraw != 0) {
			if (valueToWithdraw > balance) {
				cout << "You just have $" << balance << ". You can't withdraw $" << valueToWithdraw << endl;
			} else {
				balance = balance - valueToWithdraw;
				isNotFinished = false;
			}
			valueToWithdraw = 0;
		}

	} while (isNotFinished);	

}


void depositFunds()
{
	int selectedOption = -1;	
	bool isNotFinished = true;

	do 
    {
		
		cout << "Deposit options:" << endl;
		cout << "1 - $20" << endl;
		cout << "2 - $40" << endl;	
		cout << "3 - $60" << endl;
		cout << "4 - $100" << endl;
		cout << "5 - $200" << endl;
		cout << "6 - cancel transaction" << endl;
		cout << "choose a deposit option (1-6)" << endl;

		cin >> selectedOption;
		switch (selectedOption) 
        {
			case 1:
				balance = balance + 20;
				isNotFinished = false;
				break;
			case 2:
				balance = balance + 40;
				isNotFinished = false;
				break;
			case 3:
				balance = balance + 60;
				isNotFinished = false;
				break;
			case 4:
				balance = balance + 100;
				isNotFinished = false;
				break;
			case 5:
				balance = balance + 200;
				isNotFinished = false;	
				break;
			case 6:
				isNotFinished = false;
				break;
			default:
				cout << "Invalid option! Try again." << endl;
				break;
		} 
		
	} 
    while (isNotFinished);

}