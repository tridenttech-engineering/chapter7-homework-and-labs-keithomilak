//hw7-16.cpp - displays three tip amounts
//Created/revised by <Keith Omilak> on <2/21/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//declare variables
	double bill = 0.0;
	double tip = 0.0;
	double rate = 0.1;

	//prompt for input
	cout << "Please enter the bill amount: $" << endl;
	cin >> bill;

	//main loop to calculate and display tip amounts
	while (rate <= 0.2)
	{
		if (bill > 0)
			{
			tip = bill * rate;
			cout << defaultfloat << setprecision(2) << rate * 100 << "% tip: ";
			cout << fixed << setprecision(2) << "$" << tip << endl;
			rate += 0.05;
		}
		else
		{
			cout << "Invalid entry. Try again." << endl;
			cout << "Please enter the bill amount: $" << endl;
		}//end if
	}   // end repeat
	
	return 0;
}	//end of main function
