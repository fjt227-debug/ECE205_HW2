// ECE205HW2_Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ifstream in; //input file stream 
    ofstream out; //output file stream

    double  n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0; //5 different scores 

    //Read data from Text File
    in.open("scores.txt"); //Open input file
    in >> n1; 
    in >> n2;
    in >> n3;
    in >> n4;
    in >> n5;

    double average = (n1 + n2 + n3 + n4 + n5) / 5.0; //Average calculation 
    double std_dev = sqrt((pow(n1 - average, 2) + pow(n2 - average, 2) 
        + pow(n3 - average, 2) + pow(n4 - average, 2) 
        + pow(n5 - average, 2))/5.0);//standard deviation calculation

    //write data in text file
    //Format output file
    out.open("output.txt");
    out.setf(ios::fixed);
    out.setf(ios::showpoint); //Forces the decimal point to always be shown
    out.precision(2); //Sets number of digits after decimal point
    //Results being sent to the output.txt file
    out << "Average: " << average << endl;
    out << "Standard Deviation: " << std_dev << endl;

    //Format output results on console
    cout.setf(ios::fixed); //Displays numbers in standard format instead of scientific notation
    cout.setf(ios::showpoint); //Forces the decimal point to always be shown
    cout.precision(2); //Sets number of digits after decimal point
    //Results being printed on the console
    cout << "Average: " << average << endl;
    cout << "Standard Deviation: " << std_dev << endl;

    //Close the files
    in.close();
    out.close();
    return 0;
}

