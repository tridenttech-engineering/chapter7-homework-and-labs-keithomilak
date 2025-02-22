//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <Keith Omilak> on <2/20/25>

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    double sales = 0.0;
    int salesTarget = 150000;
    double rate = 0.055;
    int years = 0;

    cout << "What are your annual sales?" << endl;
    cin >> sales;
    while (sales < salesTarget){
        if (sales > 0){
            years++;
            sales *= (1 + rate);
        }
        else{
            cout << "Invalid entry. Try again." << endl;
        }//end if
    }// end repeat

    cout << "Sales target of $" << salesTarget << " reached in " << years << " years." << endl;
    cout << "Sales achieved at time of completion: $" << fixed << setprecision(2) << sales << endl;

    return 0;
} //end of main function
