#include <iostream>
#include <string>

class InternalClass {
public:
    std::string fetch() {
        return "get user info";
    }
};

class ExternalClass {
public:
    std::string search() {
        return "get user info";
    }
};

// 어댑터 클래스
class Adapter {
private:
    ExternalClass* external;

public:
    Adapter(ExternalClass* ext) : external(ext) {}

    std::string fetch() {
        return external->search();
    }
};

int main() {
    ExternalClass ext;
    Adapter adapter(&ext);

    std::cout << adapter.fetch() << std::endl;  // get user info
    return 0;
}
