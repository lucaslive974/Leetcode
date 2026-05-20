#include "quests.hpp"

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
