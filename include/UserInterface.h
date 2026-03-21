#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Database.h"

class UserInterface {
    private:
        Database db;

    public:
        void start();
};

#endif