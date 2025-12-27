/*
 * Description: Converting age from years to months, days, and hours.
 * Concept: Arithmetic operations (*), Data types (int)
 */
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age in years: ";
    cin >> age;

    int months = age * 12;
    int weeks = age * 52;
    int days = age * 365;
    int hours = days * 24;

    cout << "Your age in months: " << months << endl;
    cout << "Your age in weeks: " << weeks << endl;
    cout << "Your age in days: " << days << endl;
    cout << "Your age in hours: " << hours << endl;

    return 0;
}