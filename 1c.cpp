#include <iostream>
using namespace std;

int main() {
    for (int i =1;i<21;i++) {
        if(i%2 != 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << "\nEnd of the loop";
    return 0;
}