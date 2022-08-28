#pragma once

#include <iostream>
#include <string>

#include "Functions.h"

using namespace std;


class Customers : public Functions
{
	string name,gender, email, nationality, age, phone;
	char arr[999] = "";

public:
	static string cusID;

	void getDetails();
	void showDetails();
};