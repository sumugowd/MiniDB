#ifndef RECORDMANAGER_H
#define RECORDMANAGER_H

#include<vector>
#include "Record.h"
#include "SearchEngine.h"
#include "FileManager.h"

class RecordManager {
    private:
        std::vector<Record> records;
        SearchEngine searchEngine;
        FileManager FileManager;

    public:
        void addRecord(const Record& record);
        void deleteRecord(int id);
        void updateRecord(int id, const std::string& name, int age);
        void displayAll() const;
        void searchRecord(int id);
        const SearchEngine& getSearchEngine() const;
        RecordManager();
};

#endif