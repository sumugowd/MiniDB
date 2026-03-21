#ifndef RECORDMANAGER_H
#define RECORDMANAGER_H

#include<vector>
#include "Record.h"
#include "SearchEngine.h"

class RecordManager {
    private:
        std::vector<Record> records;
        SearchEngine searchEngine;

    public:
        void addRecord(const Record& record);
        void deleteRecord(int id);
        void updateRecord(int id);
        void displayAll() const;
        void searchRecord(int id);
};

#endif