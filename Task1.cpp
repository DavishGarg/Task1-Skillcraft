#include <iostream>
using namespace std;

int main() {
    double temp;
    int choice;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit and Kelvin" << endl;
    cout << "2. Fahrenheit to Celsius and Kelvin" << endl;
    cout << "3. Kelvin to Celsius and Fahrenheit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    switch(choice) {
        case 1: {
            double fahrenheit = (temp * 9.0 / 5.0) + 32;
            double kelvin = temp + 273.15;

            cout << "Fahrenheit = " << fahrenheit << " °F" << endl;
            cout << "Kelvin = " << kelvin << " K" << endl;
            break;
        }

        case 2: {
            double celsius = (temp - 32) * 5.0 / 9.0;
            double kelvin = celsius + 273.15;

            cout << "Celsius = " << celsius << " °C" << endl;
            cout << "Kelvin = " << kelvin << " K" << endl;
            break;
        }

        case 3: {
            double celsius = temp - 273.15;
            double fahrenheit = (celsius * 9.0 / 5.0) + 32;

            cout << "Celsius = " << celsius << " °C" << endl;
            cout << "Fahrenheit = " << fahrenheit << " °F" << endl;
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}