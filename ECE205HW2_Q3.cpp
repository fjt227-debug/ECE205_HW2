// ECE205HW2_Q3.cpp: 

#include <iostream>
using namespace std;

int main()
{
    double height, weight; //Persons height and weight
    int age; //Persons age
    
    double hatsize, jacketsize, waistsize; //This is the persons hat size, jacket size, and wiast size
    int adjust_jacket, adjust_waist; //This is the perosns adjusted jacket and adjusted waist size

    cout << "Enter your height in inches: "; //Enter height
    cin >> height;

    cout << "Enter your weight in pounds: "; //Enter weight
    cin >> weight;

    cout << "Enter your age in years: "; //Enter age 
    cin >> age;

    hatsize = 2.9 * (weight / height); //Hat size is 2.9 multiplied by the weight divided by the height
    jacketsize = (height * weight) / 288.0; //Jacket size is height multipled by weight divided by 2888
    waistsize = weight / 5.7; //Waist size is weight divided by 5.7

    if (age > 28) //Waist size adjustment only if the persons age us greater than 28 years old
    {
        adjust_waist = (age - 28) / 2; //Calculates number of 2 year periods over 28 years old
        waistsize = waistsize + (adjust_waist * 0.1); //Adds 0.1 inch to waist size for every 2 year period
    }

    if (age > 30) //Jacket size adjustment only if the persons age is greater than 30 years old 
    {
        adjust_jacket = (age - 30) / 10; //Calculates number of 10 year periods over 30 years old
        jacketsize = jacketsize + (adjust_jacket * (1.0 / 8.0)); //Adds 1/8 inch to jacket size for each 10 year period
    }

    cout.setf(ios::fixed); //Displays numbers in standard format instead of scientific notation
    cout.setf(ios::showpoint); //Forces the decimal point to always be shown
    cout.precision(2); //Sets number of digits after decimal point

    cout << "Hat size: " << hatsize << " inches" << endl; //Output Hat size
    cout << "Jacket size: " << jacketsize << " inches" << endl; //Output Jacket size
    cout << "Waist size: " << waistsize << " inches" << endl; //Output Waist size
    return 0;
}


