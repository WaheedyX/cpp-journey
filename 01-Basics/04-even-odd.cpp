/*
 * Description: Check if a number is Even or Odd.
 * Concept: Modulo operator (%), If-Else conditions, Ternary Operator
 */
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Method 1: Using If-Else
    cout << "--- Using If-Else ---" << endl;
    if (number % 2 == 0)
    {
        cout << number << " is Even." << endl;
    }
    else
    {
        cout << number << " is Odd." << endl;
    }

    // Method 2: Using Ternary Operator
    cout << "--- Using Ternary Operator ---" << endl;
    string result = (number % 2 == 0) ? "Even" : "Odd";
    cout << number << " is " << result << "." << endl;

    return 0;
}