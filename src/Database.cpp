#include "../include/Database.h"
#include <iostream>

using namespace std;

void Database::addRecord(){
    int id, age;
    string name;

    cout << "Enter ID: ";
    if(!(cin >> id)){
        cout << "Invalid ID input.\n";
        cin.clear();
        cin.ignore(10000,'\n');
        return;
    }

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    if(!(cin >> age)){
        cout << "Invalid age input.\n";
        cin.clear();
        cin.ignore(10000,'\n');
        return;
    }

    manager.addRecord(Record(id, name, age));
}

void Database::deleteRecord() {
    int id;
    cout << "Enter ID to delete: ";
    if(!(cin >> id)){
        cout << "Invalid ID input\n";
        cin.clear();
        cin.ignore(10000,'\n');
        return;
    }

    manager.deleteRecord(id);
}

void Database::updateRecord(){
    int id;
    cout << "Enter ID to update: ";
    if(!(cin >> id)){
        cout << "Invalid ID input\n";
        cin.clear();
        cin.ignore(10000,'\n');
        return;
    }

    cin.ignore();

    string name;
    int age;

    cout << "Enter new name: ";
    getline(cin, name);

    cout << "Enter new age: ";
    cout << "Enter Age: ";
    if(!(cin >> age)){
        cout << "Invalid age input.\n";
        cin.clear();
        cin.ignore(10000,'\n');
        return;
    }

    manager.updateRecord(id, name, age);
}

void Database::searchRecord(){
    int id;
    cout << "Enter ID to search: ";
    if(!(cin >> id)){
        cout << "Invalid ID input\n";
        cin.clear();
        cin.ignore(10000,'\n');
        return;
    }

    manager.searchRecord(id);
}

void Database::displayAll() {
    manager.displayAll();
}