#include <vector>

class Solution {
public:
  int searchInsert(std::vector<int> &nums, int target) {
    int result = 0;
    int i = 0;

    if (target > nums[nums.size() - 1]) {
      return nums.size();
    }

    while (nums[result] < target) {
      result++;
      i++;
    }

    return result;
  }
};
