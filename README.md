# Arithmetic Expression Evaluator

A lightweight and efficient tool designed to parse, validate, and evaluate mathematical expressions provided as strings. It accurately handles operator precedence, parentheses, and basic arithmetic functions.

 Key Features:
* **Expression Parsing:** Converts standard infix expressions (e.g., `3 + 5 * (2 - 1)`) into postfix (RPN) or an Abstract Syntax Tree (AST) for evaluation.
* **Operator Precedence:** Strictly follows BODMAS/PEMDAS rules for correct calculation orders.
* **Input Validation:** Automatically detects syntax errors, mismatched parentheses, and invalid characters before evaluation.
* **Error Handling:** Provides clear feedback for runtime errors like division by zero.
* **Multi-Digit & Decimal Support:** Accurately processes both integers and floating-point numbers.
