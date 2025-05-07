// CSC 221 Project 6.cpp : Project 3: Celcius Temperature Table
//

#include <iostream>
#include <iomanip>
#include <random>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int getCelcius(int temp)
{
    return (temp - 32) * 5 / 9;
}

int main()
{
    cout << "Temperatures in fahrenheit and celcius from 0 - 20:" << endl << endl;;
    cout << "Fahrenheit: " << "Celcius: " << endl;
    for (int temp = 0; temp <= 20; temp++)
    {
        cout << left << setw(12) << temp << getCelcius(temp) << endl;
    }

    return 0;
}


