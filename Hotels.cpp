

#include "Functions.h"
#include "Hotels.h"

using namespace std;

void Hotels::hotels()
{
menu:
	string hotels[] = { "Radisson", "Comfort Hotel", "Holdiay Inn" };

	cout << "\n\t\t       You can also book a hotel";
	cout << "\n\t\t   We collaborated with these hotels\n";

	cout << "\n\t\t___________________________________________\n";
	for (int i = 0; i < size(hotels); i++)
	{
		cout << "\n\t\t" << (i + 1) << ". Hotel: " << hotels[i];
	}
	cout << "\n\t\t4. Exit";
	cout << "\n\t\t___________________________________________\n";

	cout << "\n\n\t\tPress 0 to back";
	cout << "\n\t\tPress number of the hotel you want to book";
	cout << "\n\n\t\tEnter your choice: ";
	cin >> hotelChoice;

	switch (hotelChoice)
	{
	case 1:
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t    Welcome to Hotel Radisson Park Inn\n";
		cout << "\n\t   The Garden, food, and beverage. Enjoy all you can drink.";
		cout << "\n\t\tStay cool and get chilled in the summer sun.\n";

		cout << "\n\t\t\tRooms offered by Radisson:";

		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t1. Standard room";
		cout << "\n\t\tAll basic facilities you need just for: 100$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t2. Junior Suite";
		cout << "\n\t\tEnjoy comfortable room for: 350$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t3. President Luxe";
		cout << "\n\t\tLive a Luxury at Radisson: 800$";
		cout << "\n\t\t___________________________________________\n";

		cout << "\n\t\tPress another key to back";
		cout << "\n\t\tPress room number you want to book";

		cout << "\n\n\t\tEnter your choice: ";
		cin >> roomChoice;

		switch (roomChoice)
		{
		case 1:
			hotelCost = 100;
			cout << "\n\t\tYou have successfully booked Standard room at Radisson";
			cout << "\n\t\tGoto Menu and take the receipt";
			backToMainMenu();
			break;
		case 2:
			hotelCost = 350;
			cout << "\n\t\tYou have successfully booked Junior Suite at Radisson";
			cout << "\n\t\tGoto Menu and take the receipt";
			backToMainMenu();
			break;
		case 3:
			hotelCost = 800;
			cout << "\n\t\tYou have successfully booked President Luxe at Radisson";
			cout << "\n\t\tGoto Menu and take the receipt";
			backToMainMenu();
			break;
		default:
			cout << "\n\t\tInvalid Input! Redirecting to Previous Menu";
			delay();
			system("CLS");
			goto menu;
			break;
		}
		break;
	case 2:
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t\t  Welcome to Comfort Hotel\n";
		cout << "\n\tCozy and small, shrouded in an atmosphere of ease in which";
		cout << "\n\t         every guest will feel comfortable.";
		cout << "\n\t  Hotel has common areas - a hall, administrationand and";
		cout << "\n    bar - restored by the skillful hand of Kazakh architect Nurlan Berdyev.\n";
		

		cout << "\n\t\t\tRooms offered by Comfort Hotel:";

		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t1. Standard room";
		cout << "\n\t\tAll basic facilities you need just for: 35$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t2. Junior Suite";
		cout << "\n\t\tEnjoy comfortable room for: 120$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t3. President Luxe";
		cout << "\n\t\tLive a Luxury at Comfort Hotel: 300$";
		cout << "\n\t\t___________________________________________\n";

		cout << "\n\t\tPress another key to back";
		cout << "\n\t\tPress room number you want to book";

		cout << "\n\n\t\tEnter your choice: ";
		cin >> roomChoice;

		switch (roomChoice)
		{
		case 1:
			hotelCost = 100;
			cout << "\n\t\tYou have successfully booked Standard room at Comfort Hotel";
			cout << "\n\t\tGoto Menu and take the receipt";
			backToMainMenu();
			break;
		case 2:
			hotelCost = 350;
			cout << "\n\t\tYou have successfully booked Junior Suite at Comfort Hotel";
			cout << "\n\t\tGoto Menu and take the receipt";
			backToMainMenu();
			break;
		case 3:
			hotelCost = 800;
			cout << "\n\t\tYou have successfully booked President Luxe at Comfort Hotel";
			cout << "\n\t\tGoto Menu and take the receipt";
			backToMainMenu();
			break;
		default:
			cout << "\n\t\tInvalid Input! Redirecting to Previous Menu";
			delay();
			system("CLS");
			goto menu;
			break;
		}
		break;
	case 3:
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t\t   Welcome to Holdiay Inn\n";
		cout << "\n  Holiday Inn is a multifunctional complex in the historical center of London, ";
		cout << "\n     consisting of a 4 - star business hotel, conferenceand banquet rooms,";
		cout << "\na cozy lounge area with a fireplace. Everything is concentrated on the territory";
		cout << "\n   of the hotel for the most comfortable restand pleasant pastime of guests.\n";

		cout << "\n\t\t\tRooms offered by Holdiay Inn:";

		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t1. Standard room";
		cout << "\n\t\tAll basic facilities you need just for: 50$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t2. Junior Suite";
		cout << "\n\t\tEnjoy comfortable room for: 200$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t3. President Luxe";
		cout << "\n\t\tLive a Luxury at Holdiay Inn: 500$";
		cout << "\n\t\t___________________________________________\n";

		cout << "\n\t\tPress another key to back";
		cout << "\n\t\tPress room number you want to book";

		cout << "\n\n\t\tEnter your choice: ";
		cin >> roomChoice;

		switch (roomChoice)
		{
		case 1:
			hotelCost = 100;
			cout << "\n\t\tYou have successfully booked Standard room at Holdiay Inn";
			cout << "\n\t\tGoto Menu and take the receipt";
			backToMainMenu();
			break;
		case 2:
			hotelCost = 350;
			cout << "\n\t\tYou have successfully booked Junior Suite at Holdiay Inn";
			cout << "\n\t\tGoto Menu and take the receipt";
			backToMainMenu();
			break;
		case 3:
			hotelCost = 800;
			cout << "\n\t\tYou have successfully booked President Luxe at Holdiay Inn";
			cout << "\n\t\tGoto Menu and take the receipt";
			backToMainMenu();
			break;
		default:
			cout << "\n\t\tInvalid Input! Redirecting to Previous Menu";
			delay();
			system("CLS");
			goto menu;
			break;
		}
		break;
	case 4:
		exit(0);
		break;
	case 0:
		cout << "\n\t\tRedirecting to Main Menu";
		delay();
		system("CLS");
		mainMenu();
		break;
	default:
		cout << "\n\t\tInvalid input! Retry again";
		delay();
		system("CLS");
		goto menu;
		break;
	}
}