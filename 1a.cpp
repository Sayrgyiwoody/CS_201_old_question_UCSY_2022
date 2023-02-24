#include <iostream> 
using namespace std;

int main() {
    const int size = 5;
    for (int i =0;i<size;i++) {
        for (int space = 0 ; space < size - i ; space++) {
            cout << " ";
        }
        for (int j = 0 ; j <= i*2 ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}