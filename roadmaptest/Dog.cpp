#include "Dog.h"
#include <iostream>

Dog::Dog(const std::string& name, const std::string& breed) : Animal(name), breed_(breed) {}

void Dog::Bark() const {
    std::cout << "Woof! Woof!" << std::endl;
}

void Dog::DisplayInfo() const {
    std::cout << "Name: " << GetName() << ", Breed: " << breed_ << std::endl;
}
