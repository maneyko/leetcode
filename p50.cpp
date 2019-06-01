/**
 * Medium
 * https://leetcode.com/problems/powx-n/
 * https://leetcode.com/submissions/detail/232913600/
 */

#include <iostream>
#include <vector>
#include <limits>

using std::cout;
using std::endl;
using std::vector;
using std::numeric_limits;

class Solution {

    double c, ans = 1;
    public:
        double myPow(double x, int n) {
            if (n == 0)
                return 1;
            if (n == 1)
                return x;
            if (n == -1)
                return 1/x;
            if (n > 0)
                return x * myPow(x, n-1);
            if (n < 0)
                return 1/x * myPow(x, n+1);
            return -1;
        }
};

int main(void) {
    Solution sol = Solution();
    cout << "sizeof(double): " << sizeof(double) << endl;
    // cout << "sizeof(int): " << sizeof(int) << endl;

    // vector<double> input1 = {1, 2147483647};
    vector<double> input1 = {2.0, -3};

    double ret = sol.myPow(input1[0], (int)input1[1]);

    cout << "largest double: "
        << numeric_limits<double>::max() << endl;

    cout
        << "input1: "
        << "x: " << input1[0] << ", n: " << input1[1]
        << endl
        << "ret (x^n): "
        << ret
        << endl;

    return 0;
}
