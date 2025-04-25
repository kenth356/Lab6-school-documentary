#include <iostream>
#include <cmath>
using namespace std;

void minmax(int &min, int &max);
int getChoice(int min, int max);

int main() {
    int min, max;
    minmax(min, max);
    cout << "\nEnter an integer between " << min << " and " << max << ": ";
    int choice = getChoice(min, max);
    cout << "\nYou Entered: " << choice << endl;
    
    return 0;
}

int getChoice(int min, int max) {
    int input;
    cin >> input;
    while (input < min || input > max) {
        cout << "\nInvalid input.";
        cout << "\nEnter an integer between 1 and 4: ";
        cin >> input;
    } return input;
}

void minmax(int &min, int &max) {
    cout << "\nEnter value for min: ";
    cin >> min;
    cout << "\nEnter value for max: ";
    cin >> max;
}