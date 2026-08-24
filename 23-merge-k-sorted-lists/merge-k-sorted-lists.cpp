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

    ListNode* merge(ListNode* left, ListNode* right) {

        ListNode dummy(0);
        ListNode* curr = &dummy;

        while(left && right) {

            if(left->val <= right->val) {
                curr->next = left;
                left = left->next;
            }
            else {
                curr->next = right;
                right = right->next;
            }

            curr = curr->next;
        }

        if(left)
            curr->next = left;
        else
            curr->next = right;

        return dummy.next;
    }

    ListNode* mergesort(vector<ListNode*>& lists, int start, int end) {

        // Only one list
        if(start == end)
            return lists[start];

        int mid = start + (end - start) / 2;

        ListNode* left = mergesort(lists, start, mid);
        ListNode* right = mergesort(lists, mid + 1, end);

        return merge(left, right);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.empty())
            return NULL;

        return mergesort(lists, 0, lists.size() - 1);
    }
};