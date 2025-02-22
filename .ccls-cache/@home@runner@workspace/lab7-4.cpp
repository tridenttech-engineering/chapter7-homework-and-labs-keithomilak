//Lab7-4.cpp - displays the average electric bill
//Created/revised by <Keith Omilak> on <2/20/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	// declare variables
	double totalBill = 0.0;
	double bill = 0.0;
	double average = 0.0;
	int numBills = 0;

	//prompting input for loop and loop condition
	cout << "Please enter the electric bill for each month. Enter -1 when finished." << endl;
	cin >> bill;

	// begin loop to acquire input
	while (bill != -1) 
	{
		if (bill >= 0){
			totalBill += bill;
			numBills++;
		}
		else{
			cout << "Invalid entry. Try again." << endl;
			cin >> bill;
		}//end if

		//prompting input to continue or exit loop
		cout << "Please enter the electric bill for each month. Enter -1 when finished." << endl;
		cin >> bill;
		
	}//end repeat

	//calculate average
	average = totalBill / numBills;

	//display results
	cout << "You accumulated $" << fixed << setprecision(2) << totalBill << " in electricity bills over " << numBills << " months." << endl;
	cout << "Average electric bill: $" << fixed << setprecision(2) << average << endl;


	return 0;
}	//end of main function