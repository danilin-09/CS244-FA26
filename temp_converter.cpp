#include <iostream>
using namespace std;

// This program converts Celsius to Fahrenheit and vice versa.
double convertTemp(int sel, double temp) {
    if (sel == 1) {
        return (temp * (9.0 / 5.0)) + 32.0;
    } else if (sel == 2) {
        return (temp - 32.0) * (5.0 / 9.0);
    }

    return 0.0;
}

int main() {
    double inTemp, outTemp;
    int choice;

    cout << "Welcome to the temperature converter!" << endl;

    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "3. Stop program" << endl;

    do {
        cout << "Your choice: ";
        cin >> choice;
    } while (choice != 1 && choice != 2 && choice != 3);

    if (choice == 1 || choice == 2) {
        cout << "Please enter temperature: ";
        cin >> inTemp;
        outTemp = convertTemp(choice, inTemp);

        switch (choice) {
            case 1:
                cout << "The temperature in Fahrenheit is " << outTemp << " degrees." << endl;
                break;
            case 2:
                cout << "The temperature in Celsius is " << outTemp << " degrees." << endl;
                break;
        }
    } else {
        cout << "\nThe program exits.\n";
    }

    return 0;
}

