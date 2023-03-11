/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == NULL) return NULL;
        vector<int> data;
        ListNode *temp= head;
        while (temp!=NULL) {
            data.push_back(temp->val);
            temp = temp->next;
        }
        sort(begin(data), end(data));
        temp = head;
        for (const auto &n: data) {
            temp->val = n;
            temp = temp->next;
        }
        return head;
    }
};
