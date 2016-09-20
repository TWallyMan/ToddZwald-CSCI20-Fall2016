#include <iostream>
#include <string>
using namespace std;

double ToKilo(int A){
    
    return A / 2.2;
}

double ToPounds(int B){
    
    return B * 2.2;
    
}


 int main() {
     
    int numPounds = 0;
    int numKilos = 0;
     
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