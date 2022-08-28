#pragma once


class Charges : public Customers, Cabs, Hotels
{
	char arr[999] = "";

public:
	void printBill();
	void showBill();
};