#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    float celsius = 37.0;
    float fahrenheit = 98.6;
    cout << celsius << "°C = " << celsiusToFahrenheit(celsius) << "°F" << endl;
    cout << fahrenheit << "°F = " << fahrenheitToCelsius(fahrenheit) << "°C" << endl;
    return 0;
}
