//Lab7-6.cpp - calculates and displays the average price
//Created/revised by <Keith Omilak> on <2/21/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

	//decalre variables, counter, and accumulator
	int numPrices     = 0;
	double price      = 0.0;
	double totalPrice = 0.0;
	double avgPrice   = 0.0;

	//begin loop to acquire input and initial loop condition
	cout << "Please enter the pricing for each item. Enter -1 when finished." << endl;
	cin >> price;

	//main program loop to get price entries
	while (price != -1)
	{
		if (price >= 0)
		{
		numPrices++;
		totalPrice += price;
		}
		else
		{
			cout << "Invalid entry. Try again." << endl;
			cin >> price;
		}//end if

		//prompt user to continue or exit loop
		cout << "What is the price of the next item? Enter -1 to exit" << endl;
		cin >> price;
		
	} //end while

	if (numPrices > 0)
	{
		avgPrice = totalPrice / numPrices;
	}// end if
	
	cout << fixed << setprecision(2) << "\nYou entered the price for " << numPrices << " items, totaling $" << totalPrice << "." << endl;
	cout << "The average price is $" << avgPrice << "." << endl;
	
	return 0;
}	//end of main function