#include <iostream> 
using namespace std;



int main() {
    int numArr[10];
    int temp;
    cout << "Enter 10 numbers : \n";
    for (int i=0;i<10;i++) {
        cin >> numArr[i];
    }
    for (int i = 0;i<10-1;i++) {
        for (int j = 0; j<10-i-1;j++) {
            if (numArr[j]<numArr[j+1]) {
                temp = numArr[j];
                numArr[j] = numArr[j+1];
                numArr[j+1] = temp;
            }
        }
    }
    cout << "The numbers are : \n";
    for (int i=0;i<10;i++) {
        cout << numArr[i] << endl;
    }
    return 0;
}