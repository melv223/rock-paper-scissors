//
//  Myfunc.cpp
//  Computer sci hw
//
//  Created by Melvin Estudillo on 4/6/23.
//

#include "Myfunc.h"
#include <iostream>
using namespace std;
void mfunc::myInput(int a)
{
    {
    Student k;
    cout << "How many Students do you want to enter information for?: ";
    int r = 0;
    cin >> r;
    string b;
    ofstream record(s, ios::app);
    ifstream file_writer(s);
    // be sure to check which directory you're using for your computer
    file_writer.open(s, ios::app);
    for (int i = 0; i < r; i++)

    {



    cout << "\nEnter ID: ";
    cin >> k.studentID;
    getline(cin, b);
    cout << "\nEnter Name: ";
    getline(cin, k.name);
    cout << "\nEnter Address: ";
    getline(cin, k.address);
    cout << "\nEnter City: ";
    getline(cin, k.city);
    cout << "\nEnter Number of years in the school: ";
    cin >> k.yearInSchool;
    cout << "\nEnter GPA: ";
    cin >> k.gpa;

    record << k.studentID << endl;
    record << k.name << endl;
    record << k.address << endl;
    record << k.city << endl;
    record << k.yearInSchool << endl;
    record << k.gpa << endl;
    }


    file_writer.close();
    cout << "You've finished Data Entry";


    }};
