#include <iostream>
using namespace std;

struct timeStru {
    int hour;
    int minute;
    int second;
};

timeStru swapTime (timeStru &t1,timeStru &t2) {
    timeStru temp;
    temp = t1;
    t1 = t2;
    t2 = temp;
    return t1,t2;
}

int main() {
    timeStru t1,t2;
    char timeChar;
    cout << "Enter first time (hour:minute:second) : " ;
    cin >> t1.hour >> timeChar >> t1.minute >> timeChar >> t1.second ;
    cout << "Enter second time (hour:minute:second) : " ;
    cin >> t2.hour >> timeChar >> t2.minute >> timeChar >> t2.second ;
    cout << "Before swapping : \n" ;
    cout << "first time = " << t1.hour << timeChar << t1.minute << timeChar << t1.second << endl;
    cout << "second time = " <<  t2.hour << timeChar << t2.minute << timeChar << t2.second << endl;
    swapTime(t1,t2);
    cout << "After swapping : \n" ;
    cout << "first time = " << t1.hour << timeChar << t1.minute << timeChar << t1.second << endl;
    cout << "second time = " <<  t2.hour << timeChar << t2.minute << timeChar << t2.second << endl;
    return 0;
}