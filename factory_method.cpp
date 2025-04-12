#include <iostream>
#include <memory>
#include <string>

class Animal {
public:
    virtual std::string speak() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    std::string speak() override {
        return "Woof!";
    }
};

class Cat : public Animal {
public:
    std::string speak() override {
        return "Meow!";
    }
};

class AnimalFactory {
public:
    static std::unique_ptr<Animal> createAnimal(const std::string& type) {
        if (type == "dog") return std::make_unique<Dog>();
        else if (type == "cat") return std::make_unique<Cat>();
        else return nullptr;
    }
};

int main() {
    auto animal = AnimalFactory::createAnimal("dog");
    if (animal) std::cout << animal->speak() << std::endl;
}
