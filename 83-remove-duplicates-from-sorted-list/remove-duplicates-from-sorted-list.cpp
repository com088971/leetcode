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
    ListNode* deleteDuplicates(ListNode* head) {
           if(head==NULL)
           return head;
        vector<int>ans;
        ans.push_back(head->val);
        ListNode* curr=head->next;
        while(curr){
            if(ans[ans.size()-1]!=curr->val){
                ans.push_back(curr->val);
               
            }
             curr=curr->next;
        }
            int i=0;
            curr=head;
            while(i<ans.size()){
                curr->val=ans[i];
                i++;
                curr=curr->next;
            }
            int n= ans.size()-1;
            curr=head;
            while(n--){
                curr=curr->next;
            }
             curr->next=NULL;
             return head;
       
              
             
            
        
       
            
    }
        
    
};