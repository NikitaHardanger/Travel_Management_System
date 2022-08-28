
#include "Functions.h"
#include "Customers.h"
#include "Cabs.h"
#include "Hotels.h"
#include "Charges.h"

using namespace std;

float Hotels::hotelCost;

float Cabs::lastCabCost;

string Customers::cusID;

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
		receipt << "\n\t\tHotel cost:\t\t " << fixed << setprecision(2) << Hotels::hotelCost;
		receipt << "\n\t\tTravel (cab) cost:\t " << fixed << setprecision(2) << Cabs::lastCabCost;
		receipt << "\n\t\t___________________________________________\n";
		receipt << "\n\t\tTotal Charge:\t\t " << fixed << setprecision(2) << Hotels::hotelCost + Cabs::lastCabCost;
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
