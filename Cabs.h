#pragma once

class Cabs : public Functions
{
	int cabChoice = 0;
	float destination = 0;
	float cabCost = 0;

public:
	static float lastCabCost;

	void cabDetails();
};