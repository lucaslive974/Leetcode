#ifndef LEETCODEH
#define LEETCODEH

#include <vector>

using namespace std;

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
    vector<int> twoSum(vector<int> &nums, int target);
    ListNode *addTwoNumber(ListNode *l1, ListNode *l2);
    bool isPalindrome(int x);
    bool hasCycle(ListNode *head);
    vector<int> topKFrequent(vector<int> &nums, int k);
    int minimumEffort(vector<vector<int>> &tasks);
    int minMoves(vector<int> &nums, int limit);
    int findMin(vector<int> &nums);
};

#endif // !LEETCODEH
