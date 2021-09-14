#include <iostream>

int main() {
    // 1. Ask N
    std::cout << "input n: ";
    int n;
    std::cin >> n;

    // 2. Split N into digits
    int digit1 = n % 10;// right digit
    int digit2 = n / 10 % 10;// middle digit
    int digit3 = n / 100;// left digit
    
    // 3. Calculate M
    int m = 1000 * digit2 + 100 * digit3 + 10 * digit1 + digit2;

    // 4. Print M
    std::cout << "m = " << m << std::endl;
}
