/**
 * Hard
 * https://leetcode.com/problems/median-of-two-sorted-arrays
 */

#include <iostream>
#include <vector>
#include "stdc++.h"

using std::cout;
using std::endl;
using std::vector;

#include "helpers.h"

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> n1;

        for (int i = 0; i < nums1.size(); i++)
            n1.push_back(nums1[i]);
        for (int i = 0; i < nums2.size(); i++)
            n1.push_back(nums2[i]);

        std::sort(n1.begin(), n1.end());

        int mdpt = (int)(n1.size() / 2);

        if (n1.size() % 2)
            return n1[mdpt];
        else
            return (n1[mdpt-1] + n1[mdpt]) / 2.0;

    }
};

int main(void) {
    Solution sol = Solution();

    vector<int> nums1 = {1, 2},
                nums2 = {3, 4};

    cout << "nums1: ";
    print_ivec(nums1);
    cout << "nums2: ";
    print_ivec(nums2);
    cout
        << "output: "
        << sol.findMedianSortedArrays(nums1, nums2)
        << endl;

    return 0;
}
