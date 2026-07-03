
// Convert infix expression to postfix
string infixToPostfix(const string& expr) {
    stack<char> ops;
    string postfix;
    for (size_t i = 0; i < expr.length(); i++) {
        char c = expr[i];

        // Skip spaces
        if (c == ' ') continue;

        // If operand, add to postfix
        if (isdigit(c)) {
            postfix += c;
        }
        // If '(', push to stack
        else if (c == '(') {
            ops.push(c);
        }
        // If ')', pop until '('
        else if (c == ')') {
            while (!ops.empty() && ops.top() != '(') {
                postfix += ops.top();
                ops.pop();
            }
            ops.pop(); // remove '('
        }
        // If operator
        else {
            while (!ops.empty() && precedence(ops.top()) >= precedence(c)) {
                postfix += ops.top();
                ops.pop();
            }
            ops.push(c);
        }
    }

