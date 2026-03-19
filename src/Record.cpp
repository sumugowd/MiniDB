#include "../include/Record.h"

// Default constructor
Record::Record() {
    id = 0;
    name = "";
    age = 0;
}

// Parameterized constructor
Record::Record(int id, string name, int age) {
    this->id = id;
    this->name = name;
    this->age = age;
}

// Getters
int Record::getID() const {
    return id;
}

string Record::getName() const {
    return name;
}

int Record::getAge() const {
    return age;
}

// Setters 
void Record::setName(string name) {
    this->name = name;
}

void Record::setAge(int age) {
    this->age = age;
}

//Display
void Record::display() const {
    cout << "ID: " << id << " | Name: " << name << " | Age: " << age << endl;
}