#include "../include/FileManager.h"
#include <fstream>
#include <iostream>

using namespace std;

// Constructor
FileManager::FileManager(string filename) {
    this->filename = filename;
}

// Save records to file
void FileManager::saveToFile(const vector<Record>& records){
    ofstream file(filename);

    if(!file){
        cout << "Error opening file for writing.\n";
        return;
    }

    for (const auto& rec : records){
        file << rec.getID() << " " << rec.getName() << " " << rec.getAge() << endl;
    }

    file.close();
    cout << "Data saved to file.\n";
}

// Load records from file
vector<Record> FileManager::loadFromFile() {
    vector<Record> records;
    ifstream file(filename);

    if(!file) {
        cout << "File not found. Starting fresh.\n";
        return records;
    }

    int id, age;
    string name;

    while(file >> id >> name >> age){
        records.push_back(Record(id,name,age));
    }
    file.close();
    cout << "Data loaded from file.\n";

    return records;
}