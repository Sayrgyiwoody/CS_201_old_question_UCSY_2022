#include <iostream> 
using namespace std;

struct node {
    int data;
    node* next;
};

void createList(int);
void traverseList();
// void releaseList();
node *first , *last , *current;

int main() {
    int num;
    first = NULL;
    last = NULL;
    current = NULL;
    cout << "Enter number = ";
    cin >> num;
    while (num!=0) {
        createList(num);
        cout << "Enter number = ";
        cin >> num;
    }
    cout << "FIFO\n";//not necessary
    traverseList();
    // releaseList();
    return 0;
}

void createList(int num) {
    current = new node;
    current->data = num;
    current->next = NULL;
    if(first != NULL) {
        last->next = current;
    }else {
        first = current;
    }
    last = current;
}

void traverseList() {
    current = first;
    while (current != NULL) {
        cout << current->data<<endl;
        current = current->next;
    }
}

//not nessary for question
// void releaseList() {
//     while(first!= NULL) {
//         current = first;
//         first = first->next;
//         delete current;
//     }
// }