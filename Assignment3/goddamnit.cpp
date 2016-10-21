#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class RandomInfo{
    public:
        void randNumber (int singleRandomNumber);
    private:
        int compGenNum;
};
void RandomInfo:: randNumber (int singleRandomNumber){
    compGenNum = singleRandomNumber;
    srand(time(0));
    singleRandomNumber = (rand() % 10) + 1;
}

//int GuessingGame(int userNumber){
    
    
/*    for( int i = 0; i < 10; i++){
        if(userNumber == numberToGuess){
            cout<<"Winner"<< endl;
        }
        else if(userNumber < numberToGuess){
            cout<<"Higher"<< endl;
            userNumber;
        }
        else if(userNumber > numberToGuess){
            cout<<"Lower"<< endl;
            userNumber;
        }
    }
    
}*/

/*int main(){
    
    RandomInfo genNumber1;
    
    int userNumber;
    //int ComputerNumber = git.RendomGenerator.numberToGuess;
    
    cout << "Pick a number between 1 and 10: " << userNumber;
    cin >> userNumber;
    cout << endl;
    
    for (int i = 1; i < 10; i++){
        if(userNumber == numberToGuess){
            cout << "Winner" << endl;
            cout << "Your Score is: " << i << endl;
            return 0;
        }
        else if(userNumber < numberToGuess){
            cout << "Higher" << endl;
            cout << "Pick a different number: ";
            cin >> userNumber;
            cout << endl;
        }
        else if(userNumber > numberToGuess){
            cout << "Lower" << endl;
            cout << "Pick a different number: ";
            cin >> userNumber;
            cout << endl;
        }
    
    
    }
    
    
    
    return 0;
    
} */