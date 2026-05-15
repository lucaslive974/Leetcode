#include "leetcode.hpp"

int main(int argc, char **argv) {
    std::vector<int> nums{1, 2, 2, 1};
    int limit = 2;

    Solution solution;

    int res = solution.minMoves(nums, limit);

    return 0;
}
