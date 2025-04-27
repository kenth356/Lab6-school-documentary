// Lab 6 areas4.cpp
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
void square();
void circle();
void rtriangle();
double findSquareArea();
double findCircleArea();
double findRTriangleArea();
int getChoice(int min, int max);

int main() {
    displayMenu();
    return 0;
}

void displayMenu() {
    while (true) {
         // Simple user prompt of the choice
        cout << endl << right << setw(76) << "=====================================";
        cout << endl << right << setw(76) << "[WELCOME TO AREAS CALCULATOR PROGRAM]";
        cout << endl << right << setw(76) << "=====================================";
        cout << endl << endl << right << setw(80) << "1 -- Square, 2 -- Circle, 3 -- Right Triangle";
        cout << endl << right << setw(82) << "-------------------------------------------------";
        choice = getChoice(1, 4);
        if (choice == 1) {
            square();
            cout << "\nArea: " << fixed << setprecision(1) << findSquareArea() << "cm^2 " << endl;
        } else if (choice == 2) {
            circle();
            cout << "\nArea: " << fixed << setprecision(4) << findCircleArea() << "cm^2 " << endl;
        } else if (choice == 3) {
            rtriangle();
            cout << "\nArea: " << fixed << setprecision(1) << findRTriangleArea() << "cm^2 " << endl;
        } else {
            for (int i = 0; i < 3; i++) {
                cout << "\n[ENTER A VALID INPUT]";
            }
        }
    }
}

void square() {
    // Users' will prompt the value of the side in cm
    cout << "\nEnter the side of the square: ";
    cin >> side;
    AREAsquare = pow(side, 2); // Computes the area of the square
}

void circle() {
    // Users' will prompt the value of the radius in cm
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    AREAcircle = PI_VAL * (pow(radius, 2)); // Computes the area of the circle
}

void rtriangle() {
    // Users' will prompt the value of the base and height in cm
    cout << "\nEnter the base of the right triangle: ";
    cin >> base;
    cout << "\nEnter the height of the right triangle: ";
    cin >> height;
    AREArtriangle = 0.5 * base * height; // Computes the area of the right triangle
}

double findSquareArea() {
    return AREAsquare;
}

double findCircleArea() {
    return AREAcircle;
}

double findRTriangleArea() {
    return AREArtriangle;
}

int getChoice(int min, int max) {
    int choice;
    cout << "\nEnter choice: ";
    cin >> choice;
    return choice;
}
