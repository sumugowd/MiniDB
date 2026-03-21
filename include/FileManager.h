#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include <string>
#include "Record.h"

class FileManager {
    private:
        std::string filename;

    public:
        FileManager(std::string filename);

        void saveToFile(const std::vector<Record>& records);
        std::vector<Record> loadFromFile();
};

#endif