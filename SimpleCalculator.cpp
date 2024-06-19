#include <iostream>
#include <sstream>
using namespace std;

// Template function to perform addition.
template <typename T>
T Operation1(T a, T b)
{
    return a + b;
}

// Template function to perform subtraction.
template <typename T>
T Operation2(T a, T b)
{
    return a - b;
}

// Template function to perform multiplication.
template <typename T>
T Operation3(T a, T b)
{
    return a * b;
}

// Template function to perform division.
template <typename T>
T Operation4(T a, T b)
{
    return a / b;
}

int main() {
    string input;
    double a, b;
    char operation;
    bool retry = true;

    while (retry)
    {
        system("cls");
        system("color 07");
        cout << "*****Simple Calculator*****" << endl << endl;
        cout << "Enter a mathematical expression (Note: Enter only one type of operation e.g 2+5): ";
        cout << endl;
        getline(cin, input);  
        cout << endl;

        // Parse the input expression.
        istringstream iss(input);
        iss >> a >> operation >> b;

        // Perform the appropriate operation based on the operator.
        switch (operation)
        {
        case '+':
            system("color 0A");
            cout << a << " + " << b << " = " << Operation1(a, b) << endl;
            retry = false;
            break;
        case '-':
            system("color 0B");
            cout << a << " - " << b << " = " << Operation2(a, b) << endl;
            retry = false;
            break;
        case '*':
            system("color 0E");
            cout << a << " * " << b << " = " << Operation3(a, b) << endl;
            retry = false;
            break;
        case '/':
            system("color 0D");
            if (b != 0)
            {
                // Display the result of division if denominator is not zero.
                cout << a << " / " << b << " = " << Operation4(a, b) << endl;
                retry = false;
            }
            else
            {
                // Error message for division by zero.
                system("color 0C");
                cerr << "Error: Division by zero! " << endl;
                retry = false;
            }
            break;
        default:
            // Error message for invalid operation.
            system("color 0C");
            cout << endl;
            cerr << "Invalid operation! " << endl;
            retry = false;
            break;
        }
        cout << endl;

        // Ask the user if they want to try another calculation.
        cout << "Do you want to try again? (y/n): ";
        string response;
        getline(cin, response);
        if (response == "y" || response == "Y" || response == "Yes" || response == "yes") {
            retry = true;
        }
        else {
            // Make the console color red before exiting.
            system("color 0C");
            retry = false;
        }
    }

    return 0;
}