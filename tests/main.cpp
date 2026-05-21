#include "leetcode.hpp"

int main(int argc, char **argv) {
    std::vector<int> nums1{1, 10, 100};
    std::vector<int> nums2{1000};

    Solution solution;

    int res = solution.longestCommonPrefix(nums1, nums2);

    return 0;
}
