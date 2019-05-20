/**
 * Easy
 * https://leetcode.com/problems/roman-to-integer/
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Solution {
public:
    int romanToInt(string s) {
        int ret = 0;
        char prev_c = s[0];
        for (char& c : s) {
            if (c == 'I') {
                ret += 1;
            }
            if (c == 'V') {
                ret += 5;
                if (prev_c == 'I')
                    ret -= 2;
            }
            if (c == 'X') {
                ret += 10;
                if (prev_c == 'I')
                    ret -= 2;
            }
            if (c == 'L') {
                ret += 50;
                if (prev_c == 'X')
                    ret -= 20;
            }
            if (c == 'C') {
                ret += 100;
                if (prev_c == 'X')
                    ret -= 20;
            }
            if (c == 'D') {
                ret += 500;
                if (prev_c == 'C')
                    ret -= 200;
            }
            if (c == 'M') {
                ret += 1000;
                if (prev_c == 'C')
                    ret -= 200;
            }
            prev_c = c;
        }
        return ret;
    }
};

int main(void) {

    string input1 = "III";
    int ret1 = Solution().romanToInt(input1);
    string input2 = "IV";
    int ret2 = Solution().romanToInt(input2);
    string input3 = "IX";
    int ret3 = Solution().romanToInt(input3);
    string input4 = "LVIII";
    int ret4 = Solution().romanToInt(input4);
    string input5 = "MCMXCIV";
    int ret5 = Solution().romanToInt(input5);

    cout
        << "input1: "
        << input1
        << endl
        << "ret1: "
        << ret1
        << endl;

    cout
        << "input2: "
        << input2
        << endl
        << "ret2: "
        << ret2
        << endl;

    cout
        << "input3: "
        << input3
        << endl
        << "ret3: "
        << ret3
        << endl;

    cout
        << "input4: "
        << input4
        << endl
        << "ret4: "
        << ret4
        << endl;

    cout
        << "input5: "
        << input5
        << endl
        << "ret5: "
        << ret5
        << endl;

    return 0;
}
