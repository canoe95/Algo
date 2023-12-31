#include <iostream>
using namespace std;

#include <set>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> s;
        while(head != NULL){
            if(s.count(head) != 0){
                return true;
            }
            s.insert(head);
            head = head->next;
        }
        return false;
    }
};