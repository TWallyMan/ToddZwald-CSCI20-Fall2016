#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int GuessingGame(int userNumber){
    
    srand(time(0));
    int numberToGuess = (rand() % 10) + 1;
    string use1 = "Winner!!";
    string use2 = "Higher";
    string use3 = "Lower";
    
    
    for (int i = 0; i < 10; i++){
        if(userNumber == numberToGuess){
            string use1;
        }
        else if(userNumber != numberToGuess){
            
            if( userNumber < numberToGuess){
                string use2;
            }
            else if(userNumber > numberToGuess){
                string use3;
            }
        }
    
    return i;
    }
}

int main(){
    
    int userNumber = 0;
    cout << "Pick a number between 1 & 10: ";
    cin >> userNumber;
    cout << endl;
    
    GuessingGame(userNumber);
    cin >> userNumber;
    
    
}