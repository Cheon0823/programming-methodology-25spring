#include "calculator.h"
#include <stdexcept>

int Calculator::add(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int Calculator::sub(int a, int b) {
    int c;
    c = a - b;
    return c;
}

int Calculator::mul(int a, int b) {
    int c;
    c = a * b;
    return c;
}

int Calculator::div(int a, int b) {
    int c;
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
        return 0;
    }
    c = a / b;
    return c;
}