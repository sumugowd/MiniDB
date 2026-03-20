#ifndef RECORDMANAGER_H
#define RECORDMANAGER_H

#include<vector>
#include "Record.h"

class RecordManager {
    private:
        std::vector<Record> records;

    public:
        void addRecord(const Record& record);
        void deleteRecord(int id);
        void updateRecord(int id);
        void displayAll() const;

        bool isDuplicate(int id) const;
};

#endif