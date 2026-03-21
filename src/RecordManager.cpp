#include "../include/RecordManager.h"
#include <iostream>

using namespace std;

// Add record
void RecordManager::addRecord(const Record& record) {
    if(searchEngine.exists(record.getID())){
        cout << "Duplicate ID! Record not added.\n";
        return;
    }
    records.push_back(record);
    searchEngine.addTOIndex(record);
    cout << "Record added successfullyl\n";
}

// Delete record
void RecordManager::deleteRecord(int id) {
    for(auto it = records.begin(); it != records.end(); ++it){
        if(it->getID() == id){
            records.erase(it);
            searchEngine.removeFromIndex(id);

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

            // Update index also
            searchEngine.addTOIndex(rec);

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