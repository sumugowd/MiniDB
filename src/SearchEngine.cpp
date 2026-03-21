#include "../include/SearchEngine.h"

using namespace std;

// Add record to map 
void SearchEngine::addToIndex(const Record& record){
    indexMap[record.getID()] = record;
}

// Remove record
void SearchEngine::removeFromIndex(int id){
    indexMap.erase(id);
}

// Search record 
Record* SearchEngine::search(int id){
    auto it = indexMap.find(id);
    if(it != indexMap.end()){
        return &(it->second);
    }
    return nullptr;
}

// Check existence
bool SearchEngine::exists(int id) const {
    return indexMap.find(id) != indexMap.end();
}