#ifndef VALIDATOR_H
#define VALIDATOR_H

#include <string>
#include "SearchEngine.h"

class Validator {
    public:
        static bool isValidId(int id, const SearchEngine& se);
        static bool isValidAge(int age);
        static bool isValidName(const std::string& name);
};

#endif