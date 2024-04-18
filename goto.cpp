#include <iostream>
using namespace std;

int main(){
    system("CLS");
    char kondisi;
    PosA:
    cout << "Hello World!";
    cout << "Hello Dunia!";
    cout << "Hallo World!";
    cout << "Hello World!";
    cout << "Ingin diulang(y/t): "; cin >> kondisi;

    if (kondisi == 'y'){
        goto PosA;
    }
    
}