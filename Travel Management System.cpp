#include <iostream>
#include <string>	
#include <fstream>
#include <iomanip>
#include <thread>

using namespace std;


void delay()
{
	for (int i = 0; i < 3; i++)
	{
		this_thread::sleep_for(chrono::milliseconds(300));
		cout << ".";
	}
}

class Customers
{
	string name, gender, email, nationality;
	int age, phone;
	char arr[999];

public:
	static int cusID;

	void getDetails();
	void showDetails();
};

void Customers::getDetails()
{
	ofstream out("old-customers.txt", ios::app);
	{
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t             Add new Customer              \n";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\tEnter Customer ID: ";
		cin >> cusID;
		cout << "\n\t\tEnter Name: ";
		cin >> name;
		cout << "\n\t\tEnter Age: ";
		cin >> age;
		cout << "\n\t\tEnter Nationality: ";
		cin >> nationality;
		cout << "\n\t\tEnter Gender: ";
		cin >> gender;
		cout << "\n\t\tEnter Mobile Number: ";
		cin >> phone;
		cout << "\n\t\tEnter Email Adress: ";
		cin >> email;
		cout << "\n\t\t___________________________________________\n";
	}

	out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nNationality: " << nationality
		<< "\nGender: " << gender << "\nMobile Number: " << phone << "\nEmail: " << email << "\n\n";
	out.close();
	cout << "\nSaved \nNote: We save your details record for future purposes\n" << endl;
	
}

void Customers::showDetails()
{
	ifstream in("old-customers.txt");
	{
		if (!in)
		{
			cout << "File Error!" << endl;
		}
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t              Old Customers                \n";
		while (!(in.eof()))
		{
			in.getline(arr, 999);
			cout << "\t\t\t" << arr << endl;
		}
		cout <<   "\t\t___________________________________________\n";
		in.close();

	}
}

class Cabs
{
	int cabChoice;
	int destination = 0;
	float cabCost = 0;

public:
	static float lastCabCost;

	void cabDetails();
};

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
	cout << "\n\t\t___________________________________________\n";

	cout << "\n\n\t\t    Let's calculate your journey cost:";
	cout << "\n\n\t\tEnter which kind of cab you need: ";
	cin >> cabChoice;
	cout << "\t\tEnter destination you have to travel: ";
	cin >> destination;

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

		

		if (hireCab == 1)
		{
			lastCabCost = cabCost;
			cout << "\n\t\tYou have successfully hired a Standard Cab";
			cout << "\n\t\tGoto menu and take the receipt";
		}
		else if (hireCab == 2)
		{
			cout << "\n\t\tRedirecting to Main Menu";
			this_thread::sleep_for(chrono::seconds(2));
			system("CLS");
			goto menu;
		}
		else
		{
			cout << "\n\t\tInvalid input! Retry again!";
			this_thread::sleep_for(chrono::seconds(2));
			system("CLS");
			goto menu;
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


		if (hireCab == 1)
		{
			lastCabCost = cabCost;
			cout << "\n\t\tYou have successfully hired a Luxury Cab";
			cout << "\n\t\tGoto menu and take the receipt";
		}
		else if (hireCab == 2)
		{
			cout << "\n\t\tRedirecting to Main Menu";
			this_thread::sleep_for(chrono::seconds(2));
			system("CLS");
			goto menu;
		}
		else
		{
			cout << "\n\t\tInvalid input! Retry again!";
			this_thread::sleep_for(chrono::seconds(2));
			system("CLS");
			goto menu;
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

		if (hireCab == 1)
		{
			lastCabCost = cabCost;
			cout << "\n\t\tYou have successfully hired a Limo Cab";
			cout << "\n\t\tGoto menu and take the receipt";
		}
		else if (hireCab == 2)
		{
			cout << "\n\t\tRedirecting to Main Menu";
			this_thread::sleep_for(chrono::seconds(2));
			system("CLS");
			goto menu;
		}
		else
		{
			cout << "\n\t\tInvalid input! Retry again!";
			this_thread::sleep_for(chrono::seconds(2));
			system("CLS");
			goto menu;
		}
		break;
	default:

		cout << "\n\t\tWrong Cab choice! Click a number from the options!";
		this_thread::sleep_for(chrono::seconds(2));
		
		system("CLS");
		goto menu;
		
	}
}

class Booking
{
	int hotelChoice;
	int roomChoice;

public:
	static float hotelCost;

	void hotels();
};

void Booking::hotels()
{	
	menu:
	string hotels[] = { "Radisson", "Comfort Hotel", "Holdiay Inn"};
	
	cout << "\n\t\t       You can also book a hotel";
	cout << "\n\t\t   We collaborated with these hotels\n";

	cout << "\n\t\t___________________________________________\n";
	for (int i = 0; i < size(hotels); i++)
	{
		cout << "\n\t\t" << (i + 1) << ". Hotel: " << hotels[i];
	}
	cout << "\n\t\t4. Exit";
	cout << "\n\t\t___________________________________________\n";

	cout << "\n\n\t\tPress any key to back";
	cout << "\n\t\tPress number of the hotel you want to book";
	cout << "\n\n\t\tEnter your choice: ";
	cin >> hotelChoice;

	system("CLS");

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
			break;
		case 2:
			hotelCost = 350;
			cout << "\n\t\tYou have successfully booked Junior Suite at Radisson";
			cout << "\n\t\tGoto Menu and take the receipt";
			break;
		case 3:
			hotelCost = 800;
			cout << "\n\t\tYou have successfully booked President Luxe at Radisson";
			cout << "\n\t\tGoto Menu and take the receipt";
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
		cout << "\n\t   The Garden, food, and beverage. Enjoy all you can drink.";
		cout << "\n\t\tStay cool and get chilled in the summer sun.\n";

		cout << "\n\t\t\tRooms offered by Comfort Hotel:";

		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t1. Standard room";
		cout << "\n\t\tAll basic facilities you need just for: 100$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t2. Junior Suite";
		cout << "\n\t\tEnjoy comfortable room for: 350$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t3. President Luxe";
		cout << "\n\t\tLive a Luxury at Comfort Hotel: 800$";
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
			break;
		case 2:
			hotelCost = 350;
			cout << "\n\t\tYou have successfully booked Junior Suite at Comfort Hotel";
			cout << "\n\t\tGoto Menu and take the receipt";
			break;
		case 3:
			hotelCost = 800;
			cout << "\n\t\tYou have successfully booked President Luxe at Comfort Hotel";
			cout << "\n\t\tGoto Menu and take the receipt";
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
		cout << "\n\t   The Garden, food, and beverage. Enjoy all you can drink.";
		cout << "\n\t\tStay cool and get chilled in the summer sun.\n";

		cout << "\n\t\t\tRooms offered by Holdiay Inn:";

		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t1. Standard room";
		cout << "\n\t\tAll basic facilities you need just for: 100$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t2. Junior Suite";
		cout << "\n\t\tEnjoy comfortable room for: 350$";
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t3. President Luxe";
		cout << "\n\t\tLive a Luxury at Holdiay Inn: 800$";
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
			break;
		case 2:
			hotelCost = 350;
			cout << "\n\t\tYou have successfully booked Junior Suite at Holdiay Inn";
			cout << "\n\t\tGoto Menu and take the receipt";
			break;
		case 3:
			hotelCost = 800;
			cout << "\n\t\tYou have successfully booked President Luxe at Holdiay Inn";
			cout << "\n\t\tGoto Menu and take the receipt";
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
	default:
		cout << "Invalid input!";
		break;
	}
}

float Booking::hotelCost;

float Cabs::lastCabCost;

int Customers::cusID;

class Charges : public Customers, Cabs, Booking
{
	char arr[999];

public:
	void printBill();
	void showBill();
};

void Charges::printBill()
{
	ofstream receipt("receipt.txt");
	{
		receipt << "\n\t\t___________________________________________\n";
		receipt << "\n\t\t              Travel Agency                \n";
		receipt << "\n\t\t                 Receipt                   \n";
		receipt << "\n\t\t___________________________________________\n";
		receipt << "\n\t\tCustomer ID: " << Customers::cusID;
		receipt << "\n\t\tDescription\t\t Total";
		receipt << "\n\t\tHotel cost:\t\t " << fixed << setprecision(2) << Booking::hotelCost;
		receipt << "\n\t\tTravel (cab) cost:\t " << fixed << setprecision(2) << Cabs::lastCabCost;
		receipt << "\n\t\t___________________________________________\n";
		receipt << "\n\t\tTotal Charge:\t\t " << fixed << setprecision(2) << Booking::hotelCost + Cabs::lastCabCost;
		receipt << "\n\t\t___________________________________________\n";
		receipt << "\n\t\t                Thank You!                 \n";
		receipt << "\n\t\t             Have a nice rest!             \n";
		receipt << "\n\t\t___________________________________________\n";
	}
	receipt.close();
}

void Charges::showBill()
{
	ifstream in("receipt.txt");
	{
		if (!in)
		{
			cout << "File Error!" << endl;
		}
		while (!(in.eof()))
		{
			in.getline(arr, 999);
			cout << arr << endl;
		}
		in.close();

	}
}

void mainMenu()
{
	int mainChoice;

	cout << "\n\t\t___________________________________________\n";
	cout << "\n\t\t              Travel Agency                \n";
	cout << "\n\t\t___________________________________________\n";
	cout << "\n\t\t                Main Menu                  \n";
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout <<   "\t\t|\tAgency System Management    -> 0  |";
	cout << "\n\t\t|\tCustomer Management         -> 1  |";
	cout << "\n\t\t|\tCabs Management             -> 2  |";
	cout << "\n\t\t|\tBookings Management         -> 3  |";
	cout << "\n\t\t|\tCharges & Bill              -> 4  |";
	cout << "\n\t\t|\tExit                        -> 5  |";
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	cout << "\n\n\t\tEnter your choice: ";
	cin >> mainChoice;

	system("CLS");

	Customers customer;
	Cabs cab;
	Booking hotel;
	Charges receipt;

	switch (mainChoice)
	{
	case 1:
		int customerChoice;

		menu:
		cout << "\n\t\t___________________________________________\n";
		cout << "\n\t\t                Customers                  \n";
		cout << "\n\t\t1. Enter New Customer                  ";
		cout << "\n\t\t2. See Old Customer                  ";
		cout << "\n\t\t3. Exit                  \n";
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
		cab.cabDetails();
		break;
	case 3:
		hotel.hotels();
		break;
	case 4:
		receipt.printBill();
		break;
	case 5:
		exit(0);
		break;
	default:
		break;
	}
}




int main() 
{
	mainMenu();

	return 0;
}