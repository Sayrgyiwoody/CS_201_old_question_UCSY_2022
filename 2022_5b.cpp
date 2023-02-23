#include <iostream>
using namespace std;

void zeroSmaller(int &num1,int &num2) {
    if (num1 < num2) {
        num1 = 0;
    }else {
        num2 = 0;
    }
    cout << "Function with integer argument.\n";
}

void zeroSmaller(float &num1,float &num2) {
    if (num1 < num2) {
        num1 = 0;
    }else {
        num2 = 0;
    }
    cout << "Function with float-point argument.\n";
}


int main() {
    int numInt1,numInt2;
    float numFl1,numFl2; 
    cout << "Enter Integer number 1 = ";
    cin >> numInt1 ;
    cout << "Enter Integer number 2 = ";
    cin >> numInt2 ;
    zeroSmaller(numInt1,numInt2);
    cout << "Result after setting smaller number zero : \n";
    cout << "number 1 = " << numInt1 << endl;
    cout << "number 2 = " << numInt2 << endl;
    cout << "Enter Float number 1 = ";
    cin >> numFl1 ;
    cout << "Enter Float number 2 = ";
    cin >> numFl2 ;
    zeroSmaller(numFl1,numFl2);
    cout << "Result after setting smaller number zero : \n";
    cout << "number 1 = " << numFl1 << endl;
    cout << "number 2 = " << numFl2 << endl;
    return 0;
}