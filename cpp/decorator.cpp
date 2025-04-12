#include <iostream>
#include <memory>

class Coffee {
public:
    virtual int cost() const {
        return 5;
    }
    virtual ~Coffee() = default;
};

// 데코레이터 베이스 클래스
class CoffeeDecorator : public Coffee {
protected:
    const Coffee* coffee;
public:
    CoffeeDecorator(const Coffee* c) : coffee(c) {}
    int cost() const override {
        return coffee->cost();
    }
};

class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(const Coffee* c) : CoffeeDecorator(c) {}
    int cost() const override {
        return coffee->cost() + 2;
    }
};

class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(const Coffee* c) : CoffeeDecorator(c) {}
    int cost() const override {
        return coffee->cost() + 1;
    }
};

int main() {
    Coffee* coffee = new Coffee();
    std::cout << coffee->cost() << std::endl;  // 5

    Coffee* milk = new MilkDecorator(coffee);
    std::cout << milk->cost() << std::endl;    // 7

    Coffee* sugar = new SugarDecorator(coffee);
    std::cout << sugar->cost() << std::endl;   // 6

    Coffee* milk_sugar = new SugarDecorator(milk);
    std::cout << milk_sugar->cost() << std::endl; // 8

    // Clean up (for raw pointers)
    delete coffee;
    delete milk;
    delete sugar;
    delete milk_sugar;

    return 0;
}
