/*
Universidad Amerike
Author: José Sierra
Practice#:3
Date: 25/02/25
Description: This code prints a common bunch of daily questions
*/

#include <iostream>
using namespace std;

string Name;
string MLName;
int Age;
float Stature;

int main ()
{
    cout<<"What is yout name?" << endl;
    cin>>Name;
    cout<<"What is your middle name" << endl;
    cin>>MLName;
    cout<<"How old are you?" << endl;
    cin>>Age;
    cout<<"How tall are you? (CM)" << endl;
    cin>>Stature;

    cout<<"Your name is: "<< Name + " " + MLName + "\n";
    cout<<"You are: "<< to_string(Age) + " Years old" "\n";
    cout<<"Your stature is: " << to_string(Stature) + "\n";

    return 0;
}