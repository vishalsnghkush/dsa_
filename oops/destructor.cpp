#include <iostream>
// scorpe se bahatr jayega turant he call hoga
class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    // Destructor  -> intilization method is ~ apply
    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}