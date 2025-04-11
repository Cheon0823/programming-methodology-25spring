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
    c = a / b;
    return c;
}