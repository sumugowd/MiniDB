#include "../include/InputHelper.h"
#include <iostream>
#include <limits>

using namespace std;

int InputHelper::getInt(const string& message){
    int value;

    while(true){
        cout << message;

        if(cin >> value){
            return value;
        }else{
            cout << "Invalid input. Please enter a number.\n";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
    }
}