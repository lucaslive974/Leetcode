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
    bool canReach(vector<int> &arr, int start);
    int minJumps(vector<int> &arr);
    int getCommon(vector<int> &nums1, vector<int> &nums2);
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B);
    int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2);
    int search(vector<int> &nums, int target);
    bool check(vector<int> &nums);
    int maxJumps(vector<int> &arr, int d);
};

#endif // !LEETCODEH
