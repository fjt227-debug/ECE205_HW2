// ECE205HW2_Q4.cpp : 

#include <iostream>
#include <cstdlib> //This includes the srand and rand functions
#include <ctime> //This includes the time function
using namespace std;

int main()
{
    int finalists[4]; //Array the stores the 4 finalist
    int randomnumber; //Varibles for random number generation and duplicate checking
    bool duplicate;
    srand(time(0));//The current time function is included in the seed random number generator so 
    //everytime you run the code it doesn't repeat the same values

    for (int i = 0; i < 4; i++) //For loop to the fill the finalists array with 4 random numbers
    {
        do {
            randomnumber = rand() % 25 + 1; //Generates a random number between 1-25 
            duplicate = false; //Assume that the numbers unique not a duplicate
            for (int k = 0; k < 1; k++) //Check to see if the number is a duplicate in the array
            {
                if (finalists[k] == randomnumber)
                {
                    duplicate = true; //If a duplicate is found
                }
            }
        } while (duplicate); //Repeat this process until non duplicate number is found
        finalists[i] = randomnumber; //Stores the different numbers in an array
    }
    cout << "The finalists are: " << endl; //Display finalists values

    for (int i = 0; i < 4; i++)
    {
        cout << finalists[i] << endl;
    }

    return 0;
}

