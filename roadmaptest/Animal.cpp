#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string& name) : name_(name) {}

void Animal::Eat() const {
    std::cout << name_ << " is eating." << std::endl;
}

void Animal::Sleep() const {
    std::cout << name_ << " is sleeping." << std::endl;
}

const std::string& Animal::GetName() const {
    return name_;
}
