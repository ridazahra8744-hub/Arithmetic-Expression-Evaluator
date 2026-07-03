int evaluatePostfix(const string& postfix) {
    stack<int> values;
    for (char c : postfix) {
        if (isdigit(c)) {
    values.push(c - '0');
}
else {
    int val2 = values.top();
    values.pop();
