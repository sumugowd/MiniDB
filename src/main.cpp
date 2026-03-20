#include "../include/Record.h"
#include "../include/RecordManager.h"

int main() {
    RecordManager manager;

    // Add records 
    manager.addRecord(Record(101, "Sumu", 21));
    manager.addRecord(Record(102, "Ravi", 22));

    //Duplicate test
    manager.addRecord(Record(101, "Test", 30));

    // Display
    manager.displayAll();

    // Update
    manager.updateRecord(101);

    // Delete
    manager.deleteRecord(102);

    // Display all again
    manager.displayAll();
    
    return 0;
}