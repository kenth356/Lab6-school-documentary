// Lab 6 swapNums.cpp -- Using Value and Reference Parameters
// This program uses a function to swap the values in two variables.
// Mariano, Kenth Jarren S.
#include <iostream>
using namespace std;

int swapNums(int &num1, int &num2);

int main() {
    int num1 = 5, num2 = 7;
    cout << "\nIn main the two numbers are " << num1 << " and " << num2 << endl;
    swapNums(num1, num2);
    cout << "\nBack in main again the two numbers are " << num1 << " and " << num2 << endl;
}

int swapNums(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "\nIn swapNums, after swapping, the two numbers are " << num1 << " and " << num2 << endl;
    return num1, num2;
}
