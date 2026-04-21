#ifndef LEETCODEH
#define LEETCODEH

#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode(int x, ListNode *next) : val(x), next(next) {};
};
// 1
//
class Solution {
  public:
    std::vector<int> twoSum(std::vector<int> &nums, int target);
    ListNode *addTwoNumber(ListNode *l1, ListNode *l2);
    bool isPalindrome(int x);
    bool hasCycle(ListNode *head);
};

#endif // !LEETCODEH
