int evaluatePostfix(const string& postfix) {
    stack<int> values;
    for (char c : postfix) {
