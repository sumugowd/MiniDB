#ifndef DATABASE_H
#define DATABASE_H

#include "RecordManager.h"

class Database {
    private:
        RecordManager manager;

    public:
        void addRecord();
        void deleteRecord();
        void updateRecord();
        void searchRecord();
        void displayAll();
};

#endif