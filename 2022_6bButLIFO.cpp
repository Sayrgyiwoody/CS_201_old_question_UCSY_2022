#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node *first , *current;

void createList(int num) {
    current = new node;
    current->data = num;
    current->next = first;
    first = current;
}

void traverseList() {
    current = first;
    while (current!=NULL) {
        cout << current->data << endl;
        current = current->next;
    }
}

void releaseList () {
    current = first ;
    while (first!= NULL) {
        current = first;
        first = first->next;
        delete current;
    }
}

int main() {
    int num;
    first = NULL;
    current = NULL;
    cout << "Enter number = ";
    cin >> num;
    while(num!=0) {
        createList(num);
    cout << "Enter number = ";
    cin >> num;
    }
    cout << "LIFO\n";
    traverseList();
    releaseList();
    return 0;
}