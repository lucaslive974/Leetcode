#include "quests.hpp"

#include <ranges>
#include <stack>

vector<int> monotonic1::finalPrices(vector<int> &prices) {
    int n = size(prices);
    vector<int> ans(n);
    stack<int> monotonic_inc_stack;

    monotonic_inc_stack.push(0);
    ans[0] = prices.front();

    for (auto [idx, price] : prices | views::enumerate | views::drop(1)) {
        while (!empty(monotonic_inc_stack) && price <= prices[monotonic_inc_stack.top()]) {
            int prev = monotonic_inc_stack.top();
            monotonic_inc_stack.pop();
            ans[prev] = prices[prev] - price;
        }

        monotonic_inc_stack.push(idx);
        ans[idx] = price;
    }

    return ans;
}

vector<int> monotonic1::dailyTemperatures(vector<int> &temperatures) {
    stack<int> monotonic_dec_stack;
    vector<int> ans(size(temperatures), 0);

    monotonic_dec_stack.push(0);
    for (auto [i, temperature] : temperatures | views::enumerate | views::drop(1)) {
        while (!empty(monotonic_dec_stack) && temperature > temperatures[monotonic_dec_stack.top()]) {
            int idx = monotonic_dec_stack.top();
            monotonic_dec_stack.pop();
            ans[idx] = i - idx;
        }

        monotonic_dec_stack.push(i);
    }

    return ans;
};
