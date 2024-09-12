#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Сума цифр числа
    int sum = 0;
    int temp = number;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    // Виведення числа у зворотному порядку
    temp = number;
    std::cout << "The number is in reverse order: ";
    while (temp > 0) {
        std::cout << temp % 10;
        temp /= 10;
    }
    std::cout << std::endl;

    // Результати
    std::cout << "The sum of the digits of a number: " << sum << std::endl;

    return 0;
}
