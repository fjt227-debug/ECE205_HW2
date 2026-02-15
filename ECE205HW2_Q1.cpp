// ECE205HW2_Q1.cpp: Gravitational attractive force

#include <iostream>
#include <cmath> //Needed for pow()
using namespace std;

int main()
{
    double m1, m2, d; //mass 1, mass 2, distance between mass 1 and mass 2
    const double G = 6.673E-8; //Gravitational constant
    double force; //Graviational attractive force between two boddies
    char response; //Asking the using if they want another response

    cout.setf(ios::scientific); //Sets output to scientific notation
    cout.setf(ios::showpoint); //Forces the decimal point to always be shown
    cout.precision(2); //Sets number of digits after decimal point

    do
    {
        cout << "Enter the mass of m1 (kg): "; //Enter mass 1
        cin >> m1;

        cout << "Enter the mass of m2 (kg): "; //Enter mass 2
        cin >> m2;

        cout << "Enter the distance between m1 and m2 (cm): "; //Enter distance 
        cin >> d;

        m1 = m1 * 1000; //Convert kg to grams
        m2 = m2 * 1000; //Convert kg to grams

        force = (G * m1 * m2) / pow(d, 2); //Calculations to find the graviational attractive force
        
        cout << "Gravitation Force: " << force << " Dynes" << endl; //Output of gravitational force
        cout << "Do you want to give another input? Y or N: "; //Asking for another response 
        cin >> response;
    } while (response == 'Y' || response == 'y'); //Two different yes cases (Y or y) will work to make the program rerun again
    return 0;
}

