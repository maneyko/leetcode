#ifndef HELPERS_H
#define HELPERS_H

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


void print_ivec(vector<int>& vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size()-1)
            cout << ", ";
        else
            cout << "]" << endl;
    }
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* create_SLL(vector<int>& vec) {
    ListNode *head = new ListNode(vec[0]);
    ListNode *l_iter = head;
    for (int i = 1; i < vec.size(); i++) {
        l_iter->next = new ListNode(vec[i]);
        l_iter = l_iter->next;
    }
    return head;
}

void print_SLL(ListNode* l1) {
    ListNode* l1_iter = l1;
    cout << "(";
    while (l1_iter) {
        cout << l1_iter->val;
        if (l1_iter->next)
            cout << " -> ";
        else
            cout << ")" << endl;
        l1_iter = l1_iter->next;
    }
}

#endif
