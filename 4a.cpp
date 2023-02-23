#include <iostream>
using namespace std;

int main() {
    char choice;
    float celsius,fahrenheit;
    cout << "Type 1 to convert Fahrenheit to Celsius ,\n2 to convert Celsius to Fahrenheit : ";
    cin >> choice;
    if (choice == '1') {
        cout << "Enter temperature in Fahrenheit : " ;
        cin >> fahrenheit;
        cout << "In Celsius that is " << (fahrenheit - 32)*5/9;
    }else if (choice == '2') {
        cout << "Enter temperature in Celsius : ";
        cin >> celsius;
        cout << "In Fahrenheit that is " << (celsius*9/5)+32;
    }else {
        cout << "Wrong Input!";
    }
    return 0;
}