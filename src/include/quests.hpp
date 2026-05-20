
#include <string>
#include <vector>

using namespace std;

class array1 {
  public:
    vector<int> getConcatenation(vector<int> &nums);
    vector<int> shuffle(vector<int> &nums, int n);
    int findMaxConsecutivesOnes(vector<int> &nums);
    vector<int> findErrorNums(vector<int> &nums);
};

class array2 {
  public:
    vector<int> findDisappeardNumbers(vector<int> &nums);
};

class stack1 {
  public:
    int evalRPN(vector<string> &tokens);
    vector<int> exclusiveTime(int n, vector<string> &logs);
};

class monotonic1 {
  public:
    vector<int> finalPrices(vector<int> &prices);
};
