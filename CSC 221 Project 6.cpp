// CSC 221 Project 6.cpp : Project 2: Safest Driving Area
//

#include <iostream>
#include <iomanip>
#include <random>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int getRegInfo(string regionName, int numAccidents) 
{
    cout << "Enter name of region: ";
    cin >> regionName;
    cout << "Enter number of accidents in this region last year: ";
    cin >> numAccidents;
    return regionName, numAccidents;
}

bool isLower(int currentLowest, int accidents)
{
    if (accidents < currentLowest)
    {
        currentLowest = accidents;
        return false;
    }
    return true;
}

void showLowest(string region, int accidents) 
{
    cout << region << accidents << endl;
}

int main()
{


    return 0;
}


