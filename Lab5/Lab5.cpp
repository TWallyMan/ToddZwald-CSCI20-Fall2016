#include <iostream>;
#include <string>;
using namespace std;

string head1 = "Zombus";
string head2 = "Franken";
string head3 = "Happy";

string eyes1 = "Vegitas";
string eyes2 = "Wackus";
string eyes3 = "Spritem";

string ears1 = "Vegitas";
string ears2 = "Wackus";
string ears3 = "Spritem";

string nose1 = "Vegitas";
string nose2 = "Wackus";
string nose3 = "Spritem";

string mouth1 = "Vegitas";
string mouth2 = "Wackus";
string mouth3 = "Spritem";

struct Monster{
    int head;
    int eyes;
    int ears;
    int nose;
    int mouth;
};

int main () {
    Monster myMonster;
    
    cout << "Please Enter Monster Head Type: " << myMonster.head;
    cin >> myMonster.head;
    cout << endl;
    cout << "Please Enter Monster Eye Type: " << myMonster.eyes;
    cin >> myMonster.eyes;
    cout << endl;
    cout << "Please Enter Monster Ear Type: " << myMonster.ears;
    cin >> myMonster.ears;
    cout << endl;
    
}

