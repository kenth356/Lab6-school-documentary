#include <iostream>
using namespace std;

int choice;
double weight, weightConverted;

void displayMenu();
void exit();
void KGtoLB();
void LBtoKG();
int getChoice(int min, int max);

int main() {
    displayMenu();
    return 0;
}

void displayMenu() {
    while (true) {
        cout << "\n[KILO CONVERTER]";
        cout << "\n1. Convert kilograms to pounds";
        cout << "\n2. Convert pounds to kilograms";
        cout << "\n3. Quit";
        choice = getChoice(1, 4);
        switch (choice) {
            case 1:
            KGtoLB();
            break;
            case 2:
            LBtoKG();
            break;
            case 3:
            exit();
            return;
            default:
            for (int i = 0; i < 3; i++) {
                cout << "\n[PLEASE ENTER A VALID INPUT]" << endl;
            }
        }
    }
}

void KGtoLB() {
    cout << "\n[KILOGRAMS TO POUNDS]";
    cout << "\nEnter Weight to be converted: ";
    cin >> weight;
    weightConverted = weight * 2.2;
    cout << "\nThe Weight to be converted: " << weight << "kg";
    cout << endl << weight << " kilograms = " << weightConverted << " pounds" << endl;
}

void LBtoKG() {
    cout << "\n[POUNDS TO KILOGRAMS]";
    cout << "\nEnter weight to be converted: ";
    cin >> weight;
    weightConverted = weight / 2.2;
    cout << "\nThe Weight to be converted: " << weight << "kg";
    cout << endl << weight << " pounds = " << weightConverted << " kilograms" << endl;
}

void exit() {
    cout << "\n[THANK YOU FOR USING MY PROGRAM]" << endl;
}

int getChoice(int min, int max) {
    cout << endl << "\nEnter choice: ";
    cin >> choice;
    return choice;
}