/*
Program Name: Days in a Month
Purpose: Extend programming functionality and experience
Author: Rania Valentina Rojas Ortiz
Date Last Modified: 06/28/2025
*/

#include <iostream>
using namespace std;

int main() {
    int month, year;
    int days;

    // Prompt user for input
    cout << "Enter a month (1-12): ";
    cin >> month;

    cout << "Enter a year: ";
    cin >> year;

    // Check for valid month input
    if (month < 1 || month > 12) {
        cout << "Invalid month entered." << endl;
        return 1; // Exit program early if input is invalid
    }

    // Determine days in the month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Check for leap year
            if ((year % 100 == 0 && year % 400 == 0) || 
                (year % 100 != 0 && year % 4 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
    }

    // Display the result
    cout << days << " days" << endl;

    return 0;
}
