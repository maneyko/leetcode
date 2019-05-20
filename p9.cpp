/**
 * Easy
 * https://leetcode.com/problems/palindrome-number/
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        string s = std::to_string(x);

        if (s.length() <= 1)
            return true;
        for (int i = 0, j = s.length()-1; i <= j; i++, j--)
            if (s[i] != s[j]) return false;
        return true;
    }
};

int main(void) {

    int input1 = 1212;
    bool ret = Solution().isPalindrome(input1);

    cout
        << "input1: "
        << input1
        << endl
        << "ret: "
        << ret
        << endl;

    return 0;
}
