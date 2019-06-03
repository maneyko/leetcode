/**
 * 
 * 
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Solution {
public:
    int problem2(string str, string substr) {
        string matchstr = "";
        int first_pos = -1;
        for (int i = 0; i < str.length(); i++) {
            for (int j = 0; j < substr.length(); j++) {
                if (str[i+j] == substr[j]) {
                    first_pos = i;
                    if (j == substr.length()-1)
                        return first_pos;
                }
                else
                    break;
            }
        }
        return first_pos;
    }

};

int main(void) {
    Solution sol = Solution();

    cout << sol.problem2("hello there", "re") << endl;
    cout << sol.problem2("hello there", "lo") << endl;
    cout << sol.problem2("hello there", "qqq") << endl;

    return 0;
}
