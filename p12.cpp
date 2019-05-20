/**
 * Medium
 * https://leetcode.com/problems/integer-to-roman/
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Solution {
public:
    string intToRoman(int num) {
        int ret = num;
        string roman("");
        while (ret >= 1000) {
            roman += 'M';
            ret -= 1000;
        }
        if (ret >= 900) {
            roman.append("CM");
            ret -= 900;
        }
        if (ret >= 500) {
            roman += 'D';
            ret -= 500;
        }
        if (ret >= 400) {
            roman.append("CD");
            ret -= 400;
        }
        while (ret >= 100) {
            roman += 'C';
            ret -= 100;
        }
        if (ret >= 90) {
            roman.append("XC");
            ret -= 90;
        }
        if (ret >= 50) {
            roman += 'L';
            ret -= 50;
        }
        if (ret >= 40) {
            roman.append("XL");
            ret -= 40;
        }
        while (ret >= 10) {
            roman += 'X';
            ret -= 10;
        }
        if (ret == 9) {
            roman.append("IX");
            ret -= 9;
        }
        if (ret >= 5) {
            roman += 'V';
            ret -= 5;
        }
        if (ret == 4) {
            roman.append("IV");
            ret -= 4;
        }
        while (ret > 0) {
            roman += 'I';
            ret -= 1;
        }

        return roman;
    }
};

int main(void) {
    Solution sol = Solution();

    int input1 = 3;
    string ret1 = sol.intToRoman(input1);
    int input2 = 4;
    string ret2 = sol.intToRoman(input2);
    int input3 = 9;
    string ret3 = sol.intToRoman(input3);
    int input4 = 58;
    string ret4 = sol.intToRoman(input4);
    int input5 = 1994;
    string ret5 = sol.intToRoman(input5);

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
