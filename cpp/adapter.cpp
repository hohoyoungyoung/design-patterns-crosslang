// Adapter Pattern
// 어댑터 패턴은 서로 다른 인터페이스를 가진 클래스들이 함께 작업할 수 있도록 도와주는 패턴입니다.
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
