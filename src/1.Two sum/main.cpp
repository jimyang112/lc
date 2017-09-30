#include <vector>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		std::vector<int> res = std::vector<int>();
		for (size_t i = 0; i < nums.size(); ++i) {
			for (size_t j = 0; j < nums.size(); ++j) {
				if (j == i) {
					continue;
				}
				if (nums[i] + nums[j] == target) {
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
		}

		return res;
	}
};

int main(int argc, char** argv) {
	Solution slo = Solution();
}