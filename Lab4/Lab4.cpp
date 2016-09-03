//Todd Zwald Lab 4 Coin Values
//   9/1/ 16
// This program is to seperate a users input of how much money in coins they are putting in and then seperating them by each amount of coins for each type

#include <iostream>
using namespace std;

int main () {
    int totalCoinValue = 0;
    int coinValue = 0;
    int pennyAmount = 0;
    int nickelAmount = 0;
    int dimeAmount = 0;
    int quarterAmount = 0;
    int pennyValue = 1;
    int nickelValue = 5;
    int dimeValue = 10;
    int quarterValue = 25;
    
    cout << "Enter in coins: ";
    cin >> totalCoinValue;
    cout << endl;
    
    cout << "Re-enter in coins : ";
    cin >> coinValue;
    cout << endl;
    
    
    cout << "Quarters: ";
    quarterAmount = coinValue / quarterValue;
    cout << quarterAmount << endl;
    coinValue = coinValue - (quarterAmount * quarterValue);
    cout << coinValue << " cents left" << endl;
    
    cout << "Dimes: ";
    dimeAmount = coinValue / dimeValue;
    cout << dimeAmount << endl;
    coinValue = coinValue - (dimeAmount * dimeValue);
    cout << coinValue << " cents left" << endl;
    
    cout << "Nickels: ";
    nickelAmount = coinValue / nickelValue;
    cout << nickelAmount << endl;
    coinValue = coinValue - (nickelAmount * nickelValue);
    cout << coinValue << " cents left" << endl;
    
    
    cout << "Pennies: ";
    pennyAmount = coinValue / pennyValue;
    cout << pennyAmount << endl;
    coinValue = coinValue - (pennyAmount * pennyValue);
    cout << coinValue << " cents left" << endl;
    
    cout << "Ammount owed: ";
    totalCoinValue = totalCoinValue - (totalCoinValue * .109);
    cout << totalCoinValue << "cents" << endl;
    
    return 0;
    
    
}