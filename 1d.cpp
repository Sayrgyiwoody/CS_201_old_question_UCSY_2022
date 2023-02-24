#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int w = 17, z = 15;
    int *ptr;
    char name[15] = "John Smith";
    ptr = &z ; w = *ptr;
    cout << strlen(name) << "\t";
    cout << *ptr << "\t" << w << endl;
    cout << strcmp(name,"John Smith") << endl;
    cout << name << endl;
    return 0;
}