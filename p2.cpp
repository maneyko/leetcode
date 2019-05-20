/**
 * Medium
 * https://leetcode.com/problems/add-two-numbers
*/

#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

#include "helpers.h"

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

            ListNode *l1_head = l1,
                     *l2_head = l2;

            std::string l1_s(""),
                        l2_s("");

            ListNode *l1_iter = l1,
                     *l2_iter = l2;

            while (l1_iter) {
                l1_s.append(std::to_string(l1_iter->val));
                l1_iter = l1_iter->next;
            }

            while (l2_iter) {
                l2_s.append(std::to_string(l2_iter->val));
                l2_iter = l2_iter->next;
            }

            std::reverse(l1_s.begin(), l1_s.end());
            std::reverse(l2_s.begin(), l2_s.end());

            l1_iter = l1_head;
            l2_iter = l2_head;

            long long ret_ll = std::stoll(l1_s)
                             + std::stoll(l2_s);

            std::string ret_s = std::to_string(ret_ll);
            std::reverse(ret_s.begin(), ret_s.end());

            ListNode *ret_head = new ListNode((int)(ret_s.at(0)-48));
            ListNode *ret_iter = ret_head;

            for (int i = 1; i < ret_s.length(); i++) {
                ret_iter->next = new ListNode((int)(ret_s.at(i)-48));
                ret_iter = ret_iter->next;
            }

            return ret_head;
        }

};

int main(void) {
    Solution sol = Solution();

    vector<int> l1_v = {2, 4, 3},
                l2_v = {5, 6, 4};

    ListNode *l1 = create_SLL(l1_v);
    ListNode *l2 = create_SLL(l2_v);
    cout << "l1: ";
    print_SLL(l1);
    cout << "l2: ";
    print_SLL(l2);

    ListNode *ret = sol.addTwoNumbers(l1, l2);

    cout << "ret: ";
    print_SLL(ret);

    return 0;
}
