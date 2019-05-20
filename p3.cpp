/**
 * Medium
 * https://leetcode.com/problems/longest-substring-without-repeating-characters
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::string longest_s("");
        std::string s_iter("");
        std::string curr("");

        for (char& c : s) {
            curr += c;

            if (curr.substr(0, curr.length()-1).find(c) != std::string::npos)
                curr = curr.substr(curr.find(c)+1);

            if (curr.length() > longest_s.length())
                longest_s = curr;

        }
        return longest_s.length();
    }
};

int main(void) {

    Solution sol = Solution();

    std::string input1 = "abcabcbb";
    std::string input2 = "bbbbb";
    std::string input3 = "pwwkew";

    cout << "input1: " << input1 << endl;
    cout << "output: " << sol.lengthOfLongestSubstring(input1) << endl;
    cout << "input2: " << input2 << endl;
    cout << "output: " << sol.lengthOfLongestSubstring(input2) << endl;
    cout << "input3: " << input3 << endl;
    cout << "output: " << sol.lengthOfLongestSubstring(input3) << endl;

    return 0;
}
