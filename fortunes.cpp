// Lab 6 fortunes.cpp
// This fortune telling program  will be modified to use a void function.
// Mariano, Kenth Jarren S.
#include <iostream>
#include <cmath>
using namespace std;

void tellFORTUNE(int &numYears, int &numChildren);

int main() {
    int numYears, numChildren;
    tellFORTUNE(numYears, numChildren);
    cout << "\nYou will be married in " << numYears << " years " << "and will have " << numChildren << " children." << endl;
    return 0;
}

void tellFORTUNE(int &numYears, int &numChildren) {
    cout << "\nThis program can tell your future." << endl
    << "Enter two integers separated by a space: ";
    cin >> numYears >> numChildren;
    numYears = abs(numYears) % 5;
    numChildren = abs(numChildren) % 6;
}
