#include <iostream>
using namespace std;

int main() {
    float initalAmt,numYear,interest,total;
    char choice ;
    
    do {
        cout << "Enter initial amount : ";
        cin >> initalAmt;
        cout << "Enter number of years : ";
        cin >> numYear;
        cout << "Enter interest rate : ";
        cin >> interest;
        interest/=100;
        total = initalAmt;
        for (int i =0;i<numYear;i++) {
            total = total + (total * interest);
        }
        cout << "At the end of " << numYear << " years you will have " << total << " dollars.\n"; 
        cout << "Do you want another (y/n)? :";
        cin >> choice;
    }while (choice == 'y');
    return 0;
}