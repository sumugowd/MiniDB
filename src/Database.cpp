#include "../include/Database.h"
#include "../include/Validator.h"
#include "../include/InputHelper.h"
#include <iostream>

using namespace std;

void Database::addRecord(){
    int id;
    while(true){
        id = InputHelper::getInt("Enter ID: ");
        
        if(Validator::isValidId(id,manager.getSearchEngine())){
            break;
        }
    }

    cin.ignore();

    string name;
    while(true){
        cout << "Enter Name: ";
        getline(cin,name);
        
        if(Validator::isValidName(name)) break;
    }

    int age;
    while(true){
        age = InputHelper::getInt("Enter Age: ");

        if(Validator::isValidAge(age)) break;
    }

    manager.addRecord(Record(id, name, age));
}

void Database::deleteRecord() {
    int id = InputHelper::getInt("Enter ID to delete: ");

    manager.deleteRecord(id);
}

void Database::updateRecord(){
    int id = InputHelper::getInt("Enter ID to update: ");

    cin.ignore();

    string name;

    cout << "Enter new name: ";
    getline(cin, name);

    int age = InputHelper::getInt("Enter new Age: ");

    manager.updateRecord(id, name, age);
}

void Database::searchRecord(){
    int id = InputHelper::getInt("Enter ID to search: ");

    manager.searchRecord(id);
}

void Database::displayAll() {
    manager.displayAll();
}