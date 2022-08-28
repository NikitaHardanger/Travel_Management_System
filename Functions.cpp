#include "Functions.h"
#include "Customers.h"
#include "Cabs.h"
#include "Hotels.h"
#include "Charges.h"

using namespace std;

void Functions::start()
{
	system("color 50");
	cout << "\n\t\t        Welcome to our Travel Agency\n";
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "\n\t  You can use our service to order what you need for your trip \n";
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "\n\t        Our service allows you to order Cab and Hotel \n";
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "\n\t\t  and pay for everything with one receipt. \n";
	this_thread::sleep_for(chrono::milliseconds(1000));
	mainMenu();
}


void Functions::delay()
{
	for (int i = 0; i < 3; i++)
	{
		this_thread::sleep_for(chrono::milliseconds(400));
		cout << ". ";
	}
}

void Functions::mainMenu()
{

	int mainChoice;

	Customers customer;
	Cabs cab;
	Hotels hotel;
	Charges receipt;


	cout << "\n\t\t___________________________________________\n";
	cout << "\n\t\t            Black Cat Agency               \n";
	cout << "\n\t\t___________________________________________\n";
	cout << "\n\t\t                Main Menu                  \n";
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n\t\t|\tCustomer Management         -> 1  |";
	cout << "\n\t\t|\tTaxi Management             -> 2  |";
	cout << "\n\t\t|\tBookings Management         -> 3  |";
	cout << "\n\t\t|\tCharges & Bill              -> 4  |";
	cout << "\n\t\t|\tExit                        -> 5  |";
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	cout << "\n\n\t\tEnter your choice: ";
	cin >> mainChoice;

	switch (mainChoice)
	{
	case 1:
		system("CLS");
		int customerChoice;

	menu:
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t                Customers                  \n";
		cout << "\n\t\t1. Enter New Customer                  ";
		cout << "\n\t\t2. See Old Customer                  ";
		cout << "\n\t\t3. Main Menu                  \n";
		cout << "\n\t\t___________________________________________\n";

		cout << "\n\n\t\tEnter your choice: ";
		cin >> customerChoice;


		switch (customerChoice)
		{
		case 1:
			customer.getDetails();
			break;
		case 2:
			system("CLS");
			customer.showDetails();
			break;
		case 3:
			cout << "\n\t\tRedirecting to Previous Menu";
			delay();
			system("CLS");
			mainMenu();
			break;
		default:
			cout << "\n\t\tInvalid Input! Try Again!";
			cout << "\n\t\tRedirecting to Previous Menu";
			delay();
			system("CLS");
			goto menu;
			break;
		}
		break;
	case 2:
		cout << "\n\t\tRedirecting to Book Cabs";
		delay();
		system("CLS");
		cab.cabDetails();
		break;
	case 3:
		cout << "\n\t\tRedirecting to Book Hotels";
		delay();
		system("CLS");
		hotel.hotels();
		break;
	case 4:
		cout << "\n\t\tRedirecting to get your receipt";
		delay();
		system("CLS");
		receipt.printBill();
		receipt.showBill();
		backToMainMenu();
		break;
	case 5:
		exit(0);
		break;
	default:
		break;
	}
}

void Functions::backToMainMenu()
{
	int choice;
back:
	cout << "\n\n\t\tPress 0 to back Main Menu\n";
	cout << "\n\t\tEnter your Choice: ";
	cin >> choice;


	switch (choice)
	{
	case 0:
		cout << "\n\t\tRedirecting to Main Menu";
		delay();
		system("CLS");
		mainMenu();
		break;
	default:
		cout << "\n\t\tInvalid input! Retry again";
		delay();
		goto back;
		system("CLS");
		break;
	}
}