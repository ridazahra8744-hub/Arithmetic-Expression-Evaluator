#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

// Function to check operator precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to perform arithmetic operations
int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b == 0) {
                throw runtime_error("Division by zero error");
            }
            return a / b;
    }
    return 0;
}

