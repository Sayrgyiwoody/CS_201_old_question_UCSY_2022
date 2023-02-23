#include <iostream> 
using namespace std;

void leapYear(int year) {
    if (year%4==0 && year%100!=0 || year%400 == 0 ) {
        cout << "It is a leap year.";
    }else {
        cout << "It is not a leap year.";
    }
}

int main() {
    int yr;
    cout << "Enter a year : ";
    cin >> yr;
    leapYear(yr);
    return 0;
}