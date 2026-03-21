#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H

#include <map>
#include "Record.h"

class SearchEngine {
    private:
        std::map<int, Record> indexMap;

    public:
        void addToIndex(const Record& record);
        void removeFromIndex(int id);
        Record* search(int id);
        bool exists(int id) const;
};

#endif