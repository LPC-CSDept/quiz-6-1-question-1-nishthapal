#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void swapTwoValues(int &n1, int &n2);
void swapTwoValues(float &f1, float &f2);
void getinput(int &, int &);
void getinput(float &, float &);
// ******************************
// Implement all your functions here
// ******************************
void getinput(int &n1, int &n2){
    cout << "Enter integers: ";
    cin >> n1 >> n2;
}
void getinput(float &f1, float &f2){
    cout << "Enter two floating values: ";
    cin >> f1 >> f2;
}

void swapTwoValues(int &n1, int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
void swapTwoValues(float &f1, float &f2){
    float temp = f1;
    f1 = f2;
    f2 = temp;
}
