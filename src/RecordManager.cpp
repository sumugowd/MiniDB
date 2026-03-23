#include "../include/RecordManager.h"
#include "../include/Validator.h"
#include <iostream>

using namespace std;

// Add record
void RecordManager::addRecord(const Record& record) {
    if(!Validator::isValidId(record.getID(), searchEngine)){
        return;
    }

    if(!Validator::isValidName(record.getName())){
        return;
    }

    if(!Validator::isValidAge(record.getAge())){
        return;
    }
    records.push_back(record);
    searchEngine.addToIndex(record);
    FileManager.saveToFile(records);
    cout << "Record added successfullyl\n";
}

// Delete record
void RecordManager::deleteRecord(int id) {
    for(auto it = records.begin(); it != records.end(); ++it){
        if(it->getID() == id){
            records.erase(it);
            searchEngine.removeFromIndex(id);
            FileManager.saveToFile(records);

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

            if(!Validator::isValidName(name) || !Validator::isValidAge(age)){
                return;
            }

            rec.setName(name);
            rec.setAge(age);

            // Update index also
            searchEngine.addToIndex(rec);
            FileManager.saveToFile(records);

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

// Search Record (FAST using map)
void RecordManager::searchRecord(int id){
    Record* rec = searchEngine.search(id);

    if(rec != nullptr) {
        rec->display();
    }else{
        cout << "Record not found.\n";
    }
}

// File Manager
RecordManager::RecordManager() : FileManager("data/records.txt"){
    records = FileManager.loadFromFile();

    // rebuild map index
    for(const auto& rec : records){
        searchEngine.addToIndex(rec);
    }
}