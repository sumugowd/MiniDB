#include "../include/RecordManager.h"
#include <iostream>

using namespace std;

// Check duplicate ID
bool RecordManager::isDuplicate(int id) const{
    for (const auto& rec : records) {
        if(rec.getID() == id)
            return true;
    }
    return false;
}

// Add record
void RecordManager::addRecord(const Record& record) {
    if(isDuplicate(record.getID())){
        cout << "Duplicate ID! Record not added.\n";
        return;
    }
    records.push_back(record);
    cout << "Record added successfullyl\n";
}

// Delete record
void RecordManager::deleteRecord(int id) {
    for(auto it = records.begin(); it != records.end(); ++it){
        if(it->getID() == id){
            records.erase(it);
            cout << "Record deleted.\n";
            return;
        }
    }
    cout << "Record not found.\n";
}

// Update record
void RecordManager::updateRecord(int id){
    for(auto& rec : records){
        if(rec.getID() == id){
            string name;
            int age;

            cout << "Enter new name: ";
            cin >> name;
            cout << "Enter new age: ";
            cin >> age;

            rec.setName(name);
            rec.setAge(age);

            cout << "Record updated.\n";
            return;
        }
    }
    cout << "Record not found.\n";
}

// Display all records
void RecordManager::displayAll() const {
    if(records.empty()){
        cout << "No records available.\n";
        return;
    }
    for(const auto& rec : records) {
        rec.display();
    }
}