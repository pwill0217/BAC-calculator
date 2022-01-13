// WillperryProjectOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// Name: Will Perry
//This program will calculate your  Blood - Alcohol Content.

// This program will use the  Widmark formula based on weight of a person.
// this program will also go by a person's gender, number of drinks they had and time since they had the drink 
// also determines if you are able to drive

    // opening message
  
    cout << " Welcome to the blood alcohol level calculator! " << endl;
    

    // stores sentinel value
    int calc_bac = 1;
    while (calc_bac == 1)
    {
        //above are the  variables used to store number of drinks and
        // number of hours since first drink and gender
        int num_drinks, hours, gender;
        // above are the variables that store the value of BAC, weight in pounds,
        // gender constant
        double BAC, weight, gender_const;

        // ask user for their gender
        cout << endl << "What's your gender? Enter (1: Female 2: Male): ";
        cin >> gender;
        // checks gender
        while (gender != 1 && gender != 2)
        {
            cout << "That's not a valid value!" << endl;
            cout << "Please Enter (1 for Female and 2 for Male): ";
            cin >> gender;
        }
        // assigning gender constant based on gender entered
        if (gender == 1) // if female
        {
            gender_const = 0.55;
        }
        else // else male
        {
            gender_const = 0.68;
        }
        // prompting user for their weight
        cout << "Enter your weight in pounds: ";
        cin >> weight;
        // validating weight
        while (weight <= 0)
        {
            // if the weight enter was zero
            if (weight == 0)
            {
                cout << endl << "Weight cannot be zero!" << endl;
                cout << "Please enter your weight in pounds: ";
                cin >> weight;
            }
            // else the weight would have been entered negative
            else
            {
                cout << "Weight cannot be negative!" << endl;
                cout << "Please enter your weight in pounds: ";
                cin >> weight;
            }
        }
        // prompting user for number drinks they had
        cout << "Please enter number of standard drinks you had: ";
        cin >> num_drinks;
        // validating number of drinks
        while (num_drinks < 0)
        {
            cout << endl << "Number of standard drinks cannot be negative!" << endl;
            cout << "Please enter number of standard drinks you had: ";
            cin >> num_drinks;
        }
        // prompting user for the time since they had their first drink
        cout << "Enter the number of hours since you had your first drink: ";
        cin >> hours;
        // validating time
        while (hours < 0)
        {
            cout << endl << "Number of hours cannot be negative!" << endl;
            cout << "Please enter number of hours since you had your first drink: ";
            cin >> hours;
        }
        // calculate blood-alcohol content
        BAC = (-0.015 * hours) + ((2.84 * num_drinks) / (weight * gender_const));
        // print results
        cout << endl << "----------------" << endl;
        cout << " Results:" << endl;
        cout << "-----------------" << endl;
        // BAC
        cout << "Blood Alcohol Content: " << setprecision(3) << fixed << BAC << endl;
        //  effects based on BAC
        cout << "Possible effects: ";
        if (BAC < 0.03)
        {
            cout << "You have Normal behavior, there is no impairment" << endl;
        }
        else if (BAC >= 0.03 && BAC < 0.06)
        {
            cout << "You may experience mild euphoria and impairment" << endl;
        }
        else if (BAC >= 0.06 && BAC < 0.10)
        {
            cout << "You will be feeling euphoric,and have  increased impariment" << endl;
        }
        else if (BAC >= 0.10 && BAC < 0.20)
        {
            cout << "Drunk, loss of motor functions" << endl;
        }
        else if (BAC >= 0.20 && BAC < 0.30)
        {
            cout << "Confused, possible blackout" << endl;
        }
        else if (BAC >= 0.30 && BAC < 0.40)
        {
            cout << "Possibly unconscious" << endl;
        }
        else
        {
            cout << "Unconscious, risk of death" << endl;
        }
        // legal limit of driving
        if (BAC >= 0.08)
        {
            cout << "Your BAC is Over the legal limit of driving." << endl;
        }
        // asking for calculating again
        cout << endl << endl << "Would you like to calculate your BAC again? (Enter 1 for YES and 0 for NO): ";
        cin >> calc_bac;
        // validating input
        while (calc_bac != 1 && calc_bac != 0)
        {
            cout << "Invalid response!" << endl;
            cout << "Enter 1 for YES and 2 for NO: ";
            cin >> calc_bac;
        }
    }
    // Ending message
    cout << endl << endl << " Goodbye!" << endl;
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
