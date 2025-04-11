#include "calculator.h"
#include <stdexcept>

int Calculator::add(int a, int b) {
    if (a > INT_MAX - b) {
        throw std::overflow_error("Additional Overflow");
    }
    if (b<0 && a < INT_MIN - b) {
        throw std::underflow_error("Additional Underflow");
    }
    return a + b;
}

int Calculator::sub(int a, int b) {
    if (a > INT_MAX + b) {
        throw std::overflow_error("Substraction Overflow");
    }
    if (b > 0 && a < INT_MIN + b) {
        throw std::underflow_error("Substraction Underflow");
    }
    return a - b;
}

int Calculator::mul(int a, int b) {
    if (a > 0 && b > 0 && a > INT_MAX / b)
        throw std::overflow_error("Multiplication overflow");
    if (a > 0 && b < 0 && b < INT_MIN / a)
        throw std::underflow_error("Multiplication underflow");
    if (a < 0 && b > 0 && a < INT_MIN / b)
        throw std::underflow_error("Multiplication underflow");
    if (a < 0 && b < 0 && a < INT_MAX / b)
        throw std::overflow_error("Multiplication overflow");
    return a * b;
}

int Calculator::div(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    if (a > INT_MAX * b) {
        throw std::overflow_error("Multiplication Overflow");
    }
    if (a < INT_MIN * b) {
        throw std::underflow_error("Multiplication Underflow");
    }
    return a / b;
}