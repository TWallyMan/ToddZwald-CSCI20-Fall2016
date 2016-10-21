#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int GuessingGame(int userNumber) {

    srand(time(0));
    int numberToGuess = (rand() % 10) + 1;


     for(int i = 0; i < 10; i++){
        if(userNumber == numberToGuess){
            cout << "Winner!!!" << endl;
            return i;
        }
        else if(userNumber < numberToGuess){
            cout << "Higher" << endl;
            cout << "Type in number: ";
            userNumber;
            cout << endl;
        }
        else if(userNumber > numberToGuess){
            cout << "Lower" << endl;
            cout << "Type in number: ";
            userNumber;
            cout << endl;
        }
    }
}

int main(){

    int userNumber;
    int i;

    cout << "Type in number: ";
    cin >>  userNumber;
    cout << endl;

    GuessingGame(userNumber);

    cout << "Your Score Is: " << i << endl;

    return 0;
}