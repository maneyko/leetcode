/**
 * Easy
 * https://leetcode.com/problems/two-sum/
*/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


#include "helpers.h"


class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ret = {-1, -1};

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ret[0] = i;
                    ret[1] = j;
                    return ret;
                }
            }
        }

        return ret;
    }

};

int main(void) {
    Solution sol = Solution();

    std::vector<int> nums = {2, 7, 11, 15};
    std::vector<int> ret = sol.twoSum(nums, 9);

    cout << "ret: ";
    print_ivec(ret);

    return 0;
}
