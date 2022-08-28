#include "Functions.h"
#include "Customers.h"

using namespace std;

void Customers::getDetails()
{
	ofstream out("dataCustomers.txt", ios::app);
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
	cout << "\n\t\tSaved \n\t\tNote: We save your details record for future purposes\n" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	backToMainMenu();


}


void Customers::showDetails()
{

	ifstream in("dataCustomers.txt");
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
		cout << "\t\t___________________________________________\n";
		in.close();

		backToMainMenu();

	}
}