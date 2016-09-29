#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cout << "1 means true and 0 means false" << endl;
    
    
    int suzyAge = 25;
    int johnAge = 21;
    cout << "If Suzy is " << suzyAge << " and John is " << johnAge << ", is Suzy younger than John? : "<< (suzyAge < johnAge) << endl;
    
    
    
    int x =7;
    int y = 7;
    cout << "If x is " << x << " and y" << y << ", is x >= y? : " << (x >= y) << endl;
    
    int a = 1;
    int b = 9;
    cout << "If a is " << a << " and b is " << b << ", is a equal to b? : " << (a == b) << endl;
    
    int limit = 20;
    int count = 10;
    cout << "Is ((limit * count) / 2 > 0) true? : " << ((limit * count) / 2 > 0) << endl;
    
    int t = -4;
    int z = 0;
    cout << "Is (t > 5 || z < 2) true? : " << (t > 5 || z < 2) << endl;
    
    int variable = -5;
    cout << "Is (! (variable >0))  true? : " << (! (variable >0)) << endl;
    
    int A = 16;
    cout << "(A / 4 < 8 && A >= 4) T or F? :  "<< (A / 4 < 8 && A >= 4) << endl;
    
    int X = -2;
    int Y = 5;
    cout << "(X * Y < 10 || Y * z < 10) T or F? : " << (X * Y < 10 || Y * z < 10) << endl;
    
    int j = -2;
    int k = 5;
    int l = 4;
    cout << "(! (j * l < 10) || Y / X * 4 < Y * 2) T or F? : " << (! (j * l < 10) || Y / X * 4 < Y * 2) << endl;
    
    return 0;
    
}
