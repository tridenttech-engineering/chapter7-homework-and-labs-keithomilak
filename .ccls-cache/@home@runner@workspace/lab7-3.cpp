//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Keith Omilak> on <2/20/25>

#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main() {

  // declare variables and accumulators
  int day = 1;
  int numDays = 7;
  int total = 0;
  int numMessages = 0;
  double average = 0.0;

  // begin loop to acquire input
  while (day <= numDays) {
    cout << "Enter number of messages for day " << day << ": " << endl;
    cin >> numMessages;
    if (numMessages >= 0) {
      total += numMessages;
      day++;
    } else {
      cout << "Invalid entry. Try again." << endl;
    } // end if

  } // end repeat

  // calculate average
  average = static_cast<double>(total) / numDays;

  // display average rounded up to nearest whole number
  cout << "Average number of messages: " << ceil(average) << endl;

  return 0;
} // end of main function
