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
void RandomInfo :: randNumber (int singleRandomNumber){
    compGenNum = singleRandomNumber;
    srand(time(0));
    singleRandomNumber = (rand() % 10) + 1;
}

int main(){
    
    int userNum = 0;

    cout << "Pick a number between 1 and 10: ";
    cin >> userNum;
    cout << endl;
    
    
    RandomInfo randomNumber;
    
    if (userNum == ){
        cout << "Winner";
    }
/*    else if (userNum < compGenNum){
        cout << "Pick a bigger number!";
        cin >> userNum;
        cout << endl;
    }
    else if (userNum > compGenNum){
        cout << "Pick a smaller number!";
        cin >> userNum;
        cout << endl;
    }
*/    
};