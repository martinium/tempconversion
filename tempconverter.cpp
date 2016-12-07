// Fahrenheit to Celsius & Kelvin
#include <iostream>

int main() 
{
    double fahr;
    std::cout << "Enter a number for Fahrenheit temperature: " << std::endl;
    std::cin >> fahr;
    double celsius = 5.0 * (fahr - 32.0) / 9.0;
    double kelvin = celsius + 273.15;
    std::cout << fahr << " Fahrenheit is equal to " << celsius << " Celsius & " << kelvin << " Kelvin." << std::endl;
}