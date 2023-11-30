#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    Animal(const std::string& name);

    void Eat() const;
    void Sleep() const;
    const std::string& GetName() const;  // Phương thức public để truy cập name_

private:
    std::string name_;
};

#endif
