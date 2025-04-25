#include <iostream>
using namespace std;

void printMessage();
int tripleIt(int someNum);

int main() {
    int value = 2;
    cout << "\nHello from main." << endl;
    printMessage();
    cout << "\nValue returned by tripleIt is: " << tripleIt(value) << endl;
    cout << "\nIn Main value now is: " << tripleIt(value) << endl << endl;

    value = tripleIt(value);
    cout << "\nIn Main value now is: " << value << endl;
    value = tripleIt(value);
    cout << "\nIn Main value now is: " << value << endl << endl;
    cout << "\nGoodbye from main." << endl;

    return 0;
}

void printMessage() {
    cout << "\nHello from PrintMessage." << endl;
}

int tripleIt(int someNum) {
    return someNum * someNum * someNum;
}