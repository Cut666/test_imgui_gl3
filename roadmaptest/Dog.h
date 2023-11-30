#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <string>

class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed);

    void Bark() const;
    void DisplayInfo() const;

private:
    std::string breed_;
};

#endif
