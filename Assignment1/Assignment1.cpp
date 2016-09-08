#include <iostream>
#include <string>
using namespace std;

int main () {
    string personsFirstName;
    string personsLastName;
    float hourlyWage;
    int weeklyHours;
    
    cout << "Enter Full Name: ";
    cin >> personsFirstName >> personsLastName;
    cout << endl;   
    
    cout << "Enter Hourly Wage: ";
    cin >> hourlyWage;
    cout << endl;
    cout << "Enter Hours Worked This Week: ";
    cin >> weeklyHours;
    cout << endl;
    
    cout << personsFirstName << " " << personsLastName << endl;
    cout << "Hours worked: " << weeklyHours << endl;
    cout << "Hourly Wage: " << hourlyWage << endl;
    cout << "Wages for the week before taxes: " << hourlyWage * weeklyHours << endl;
    cout << "Wages after taxes: " << (hourlyWage * weeklyHours) * .83;
    
}