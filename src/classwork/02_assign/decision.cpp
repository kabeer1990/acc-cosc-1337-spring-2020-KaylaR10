#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(int hours, double hourly_rate)
{
	int gross;

	if (hours >= 40)
	{
		gross = 40 * hourly_rate + (hours - 40) * 1.5 * hourly_rate;
	}
	else
	{
		gross = hours * hourly_rate;
	}

	return gross;

}
