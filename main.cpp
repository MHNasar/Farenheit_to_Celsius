#include <iostream>

using namespace  std;
int main() {
    cout << "Enter a temperature in Farenheit: ";

    double Farenheit;
    cin >> Farenheit;
    cout << Farenheit << endl;
    double Celsius = (Farenheit - 32) * 5/9;
    cout << "Temperature in Celsius is: " << Celsius;



    return 0;

}