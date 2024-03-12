#include <iostream>
#include<cstdlib>
using namespace std;


int main()
{
    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int hh = 0;
    
    
    srand((unsigned) time(NULL));
    cout << "Welcome to rock, paper scissors!" << endl;
    int random = 1 + (rand() % 3);
    
    
    cout << "Enter 1 for rock " << endl;
    cout << "Enter 2 for paper " << endl;
    cout << "Enter 3 for scissors " << endl;
    
    cout << "Please enter a number to choose from: ";
    int userin;
    cin >> userin;
    
    
    switch (userin) {
        case 1:
            if (random == rock)
            {
                cout << "Computer chose: " << random << endl;
                cout << "Tie!" << endl;
            }
            else if(random == paper)
            {
                cout << "Computer chose: " << random << endl;
                cout << "You lose" << endl;
            }
            else if(random == scissors)
            {
                cout << "Computer chose: " << random << endl;
                cout << "You win" << endl;
            }
            
            break;
        case 2:
            if (random == rock)
            {
                cout << "Computer chose: " << random << endl;
                cout << "You win!" << endl;
            }
            else if(random == paper)
            {
                cout << "Computer chose: " << random << endl;
                cout << "You tie" << endl;
            }
            else if(random == scissors)
            {
                cout << "Computer chose: " << random << endl;
                cout << "You lose!" << endl;
            }
            break;
        case 3:
            if (random == rock)
            {
                cout << "Computer chose: " << random << endl;
                cout << "You lose!" << endl;
            }
            else if(random == paper)
            {
                cout << "Computer chose: " << random << endl;
                cout << "You win" << endl;
            }
            else if(random == scissors)
            {
                cout << "Computer chose: " << random << endl;
                cout << "You tie" << endl;
            }
            break;
        default:
            cout << "You have entered the wrong number" << endl;
            break;
    }
    
    
}
