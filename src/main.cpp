#include "../include/Record.h"
#include "../include/RecordManager.h"

int main() {
    RecordManager manager;

    // Add records 
    manager.addRecord(Record(101, "Sumu", 21));
    manager.addRecord(Record(102, "Ravi", 22));

    // Search record
    manager.searchRecord(101);

    // Delete record
    manager.deleteRecord(102);

    // display all
    manager.displayAll();
    
    return 0;
}