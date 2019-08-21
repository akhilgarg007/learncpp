#include <iostream>

int getInt() {
    std::cout << "Enter an Integer: ";
    int x{ };
    std::cin >> x;
    return x;
}

bool isEven(int x) {
    if( x % 2 )
        return 0;
    else
        return 1;
}

void checkAndPrint(int x) {
    if(!isEven(x))
        std::cout << x << " is odd\n" << std::endl;
    else
        std::cout << x << " is even\n" << std::endl;
}
int main() {
    int x{ getInt() };
    checkAndPrint(x);
}