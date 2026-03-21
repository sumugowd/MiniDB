#include "../include/Database.h"
#include <iostream>

using namespace std;

void Database::addRecord(){
    int id, age;
    string name;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    manager.addRecord(Record(id, name, age));
}

void Database::deleteRecord() {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    manager.deleteRecord(id);
}

void Database::updateRecord(){
    int id;
    cout << "Enter ID to update: ";
    cin >> id;

    manager.updateRecord(id);
}

void Database::searchRecord(){
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    manager.searchRecord(id);
}

void Database::displayAll() {
    manager.displayAll();
}