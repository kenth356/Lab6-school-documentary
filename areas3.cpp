// Lab 6 areas3.cpp
// This program computes the area of a object of the users' choice
// Mariano, Kenth Jarren S.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int choice;
double PI_VAL = 3.14159, side, base,
height, radius, AREAsquare, AREAcircle, AREArtriangle;

void displayMenu();
void findSquareArea();
void findCircleArea();
void findRTriangleArea();

int main() {
    displayMenu();
}

void displayMenu() {
    while (true) {
         // Simple user prompt of the choice
        cout << endl << right << setw(76) << "=====================================";
        cout << endl << right << setw(76) << "[WELCOME TO AREAS CALCULATOR PROGRAM]";
        cout << endl << right << setw(76) << "=====================================";
        cout << endl << endl << right << setw(80) << "1 -- Square, 2 -- Circle, 3 -- Right Triangle";
        cout << endl << right << setw(82) << "-------------------------------------------------";
        cout << endl << "\nEnter the number of choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1:
            findSquareArea();
            break;
            case 2:
            findCircleArea();
            break;
            case 3:
            findRTriangleArea();
            break;
            default:
            for (int i = 0; i < 3; i++) {
                cout << "\n[PLEASE ENTER A VALID INPUT]";
            }
        }
    }
}

void findSquareArea() {
    // Users' will prompt the value of the side in cm
    cout << "\nEnter the side of the square: ";
    cin >> side;
    AREAsquare = pow(side, 2); // Computes the area of the square
    // Displays the final output for the square
    cout << "\n-----------------------------";
    cout << endl << "\nSide of the square: " << fixed << setprecision(1) << side << "cm ";
    cout << "\nArea = " << AREAsquare << "cm^2 " << endl;
    cout << "\n-----------------------------";
}

void findCircleArea() {
    // Users' will prompt the value of the radius in cm
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    AREAcircle = PI_VAL * (pow(radius, 2)); // Computes the area of the circle
    // Displays the final output for the circle
    cout << "\n-----------------------------";
    cout << endl << "\nRadius of the circle: " << fixed << setprecision(1) << radius << "cm ";
    cout << "\nArea = " << fixed << setprecision(4) << AREAcircle << "cm^2" << endl;
    cout << "\n-----------------------------";
}

void findRTriangleArea() {
    // Users' will prompt the value of the base and height in cm
    cout << "\nEnter the base of the right triangle: ";
    cin >> base;
    cout << "\nEnter the height of the right triangle: ";
    cin >> height;
    AREArtriangle = 0.5 * base * height; // Computes the area of the right triangle
    // Displays the final output for the right triangle
    cout << "\n------------------------------------";
    cout << endl << "\nBase of the right triangle: " << fixed << setprecision(1) << base << "cm ";
    cout << "\nHeight of the right triangle: " << fixed << setprecision(1) << height << "cm ";
    cout << "\nArea = " << AREArtriangle << "cm^2 " << endl;
    cout << "\n------------------------------------";
}
