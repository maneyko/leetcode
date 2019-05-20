#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;

class Solution {
public:
    int reverse(int x) {
        // std::string text = "123";
        // int n = std::stoi(text);

        std::vector<char> v;
        std::string str = std::to_string(x);


        int lower;
        if (x < 0) {
            v.push_back('-');
            lower = 1;
        }
        else lower = 0;

        for (int i = str.length()-1; i >= lower; i--)
            v.push_back(str.at(i));

        if ((lower == 1 && str.length() > 11)
            || (lower == 0 && str.length() > 10))
            return 0;

        std::string ret_s(v.begin(), v.end());

        long ret_l = std::stol(ret_s);
        if (ret_l < -2147483648 || ret_l > 2147483647)
            return 0;
        return ret_l;
    }
};

int main(void) {
    int arg1 = -122;
    int arg2 = 241;

    cout << "arg1: " << arg1 << endl;
    cout << "output: " << Solution().reverse(arg1) << endl;
    cout << "arg2: " << arg2 << endl;
    cout << "output: " << Solution().reverse(arg2) << endl;

    return 0;
}
