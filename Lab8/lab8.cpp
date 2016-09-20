#include <iostream>
#include <string>
using namespace std;

// Converstion program for Kilos to pounds and Visa Versa
//Todd Zwald
// 9/20/16


//Function to chage Kilos into Pounds
double ToKilo(int A){
    
    return A / 2.2;
}

//Function to chage Pounds in to Kilos
double ToPounds(int B){
    
    return B * 2.2;
    
}

// Main Program for user input to get an output for Kili/Pound conversion
 int main() {
     
    int numPounds = 0.0;
    int numKilos = 0.0;
     
    cout << "How many kilograms?: ";
    cin >> numKilos;
    cout << endl;
    cout << "Total Pounds: " << ToKilo(numKilos) << endl;
    
    cout << "How many pounds?: ";
    cin >> numPounds;
    cout << endl;
    cout << "Total Kilos: " << ToPounds(numPounds) << endl;
    
    return 0;
    
 }