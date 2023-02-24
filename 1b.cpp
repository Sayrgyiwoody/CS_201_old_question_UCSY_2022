#include <iostream>
using namespace std;

int main() {
    int x = 18, y = 81, z = 40, w = 6;
    x = ++y + x-- *2;
    y = ++x - y++;
    cout << "x = " << x << "\ny = " << y << endl;
    cout << "w = " << ++w;
    z =  z - 60 * 3/9;
    cout << "\nz = " << z;
    return 0;
}