// CSC 221 Project 6.cpp : Project 1: Rectangle Properties
//

#include <iostream>
#include <iomanip>
#include <random>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int perimRect(int length, int width) {
    return 2 * (length +width);
}

int areaRect(int length, int width) { 
    return length * width;
}

void display() {
    cout << "1. Calculate the dimensions of the rectangle" << endl;
    cout << "2. Quit" << endl;
}

int main()
{
    // asks the user to enter the length and width of a rectangle
    // calculates and displays the perimeter and area of the rectangle
    // ask the user if they want to process another rectangle and continue to process rectangles until the user decides to quit
    int selection, length, width;

    do {
        display();
        cout << "Make a selection: ";
        cin >> selection;

        switch (selection) {
        case 1:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "The perimeter is " << perimRect(length, width) << " and the area is " << areaRect(length, width) << "." << endl;
            break;
        case 2:
            cout << "Goodbye" << endl;
            break;
        default:
            cout << "Invalid selection" << endl;
        }
        cout << endl;
    } while (selection != 2);

    return 0;
}


