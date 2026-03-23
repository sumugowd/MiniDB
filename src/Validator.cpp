#include "../include/Validator.h"
#include <iostream>

using namespace std;

// Validator ID (no duplicates, positive)
bool Validator::isValidId(int id, const SearchEngine& se){
    if(id <= 0){
        cout << "ID must be positive.\n";
        return false;
    }

    if(se.exists(id)){
        cout << "Duplicate ID not allowed.\n";
        return false;
    }

    return true;
}

// Validator Age
bool Validator::isValidAge(int age){
    if(age <= 0 || age > 120){
        cout << "Invalid age.\n";
        return false;
    }
    return true;
}

// Validate Name
bool Validator::isValidName(const string& name){
    if(name.empty()){
        cout << "Name cannot be empty.\n";
        return false;
    }
    return true;
}