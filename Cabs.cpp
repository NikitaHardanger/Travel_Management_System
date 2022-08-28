#include "Functions.h"
#include "Cabs.h"

using namespace std;

void Cabs::cabDetails()
{
menu:
	cout << "\n\tHello dear customer. Thank you for contacting our company!";
	cout << "\n\t     Our taxi is the most comfortable in the country!\n";
	cout << "\n\t\t___________________________________________\n";
	cout << "\n\t\t               American Cabs               \n";
	cout << "\n\t\t1. Rent a Standard Cab - 3$ for 1 KM";
	cout << "\n\t\t2. Rent a Luxury Cab - 6$ for 1 KM";
	cout << "\n\t\t3. Rent a Limo Cab - 15$ for 1 KM";
	cout << "\n\t\t4. Main Menu";
	cout << "\n\t\t___________________________________________\n";



	cout << "\n\n\t\t    Let's calculate your journey cost:";
	cout << "\n\n\t\tEnter your choice: ";
	cin >> cabChoice;


	if (cabChoice == 1 || cabChoice == 2 || cabChoice == 3)
	{
		cout << "\t\tEnter destination you have to travel: ";
		cin >> destination;
	}
	else
	{
		cout << "\n\t\tRedirecting to Previous Menu";
		delay();
		system("CLS");
		mainMenu();

	}


	int hireCab;

	switch (cabChoice)
	{
	case 1:
		cabCost = destination * 3;
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\tYour tour cost: " << cabCost << " dollars for a Standard Cab";
		cout << "\n\t\tPress 1 to hire this cab";
		cout << "\n\t\tPress 2 to select another cab";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\n\t\tEnter your choice: ";
		cin >> hireCab;



		switch (hireCab)
		{
		case 1:
			lastCabCost = cabCost;
			cout << "\n\t\tYou have successfully hired a Standard Cab";
			cout << "\n\t\tGo to menu and take the receipt";
			backToMainMenu();
			break;
		case 2:
			cout << "\n\t\tRedirecting to Main Menu";
			delay();
			system("CLS");
			goto menu;
			break;
		default:
			cout << "\n\t\tInvalid input! Retry again";
			delay();
			system("CLS");
			goto menu;
			break;
		}
		break;
	case 2:
		cabCost = destination * 6;
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\tYour tour cost: " << cabCost << " dollars for a Luxury Cab";
		cout << "\n\t\tPress 1 to hire this cab";
		cout << "\n\t\tPress 2 to select another cab";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\n\t\tEnter your choice: ";
		cin >> hireCab;


		switch (hireCab)
		{
		case 1:
			lastCabCost = cabCost;
			cout << "\n\t\tYou have successfully hired a Luxury Cab";
			cout << "\n\t\tGo to menu and take the receipt";
			backToMainMenu();
			break;
		case 2:
			cout << "\n\t\tRedirecting to Main Menu";
			delay();
			system("CLS");
			goto menu;
			break;
		default:
			cout << "\n\t\tInvalid input! Retry again";
			delay();
			system("CLS");
			goto menu;
			break;
		}
		break;
	case 3:
		cabCost = destination * 15;
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\tYour tour cost: " << cabCost << " dollars for a Limo Cab";
		cout << "\n\t\tPress 1 to hire this cab";
		cout << "\n\t\tPress 2 to select another cab";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\n\t\tEnter your choice: ";
		cin >> hireCab;

		switch (hireCab)
		{
		case 1:
			lastCabCost = cabCost;
			cout << "\n\t\tYou have successfully hired a Limo Cab";
			cout << "\n\t\tGo to menu and take the receipt";
			backToMainMenu();
			break;
		case 2:
			cout << "\n\t\tRedirecting to Main Menu";
			delay();
			system("CLS");
			goto menu;
			break;
		default:
			cout << "\n\t\tInvalid input! Retry again";
			delay();
			system("CLS");
			goto menu;
			break;
		}
		break;
	default:

		cout << "\n\t\tWrong Cab choice! Click a number from the options";
		delay();

		system("CLS");
		goto menu;
		break;

	}
}