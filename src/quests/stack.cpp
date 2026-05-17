#include "quests.hpp"
#include <cctype>
#include <functional>
#include <stack>
#include <unordered_map>

unordered_map<string, function<int(int, int)>> operations{
    {"+", plus<int>()}, {"-", minus<int>()}, {"/", divides<int>()}, {"*", multiplies<int>()}};

int stack1::evalRPN(vector<string> &tokens) {
    stack<int> evaluation;

    for (auto &token : tokens) {
        if (token != "+" && token != "-" && token != "/" && token != "*") {
            evaluation.push(stoi(token));
            continue;
        }

        auto op = operations[token];

        int right = evaluation.top();
        evaluation.pop();

        int left = evaluation.top();
        evaluation.pop();

        int res = op(left, right);
        evaluation.push(res);
    }

    return evaluation.top();
};
