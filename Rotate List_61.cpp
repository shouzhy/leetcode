/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int i, count;
        ListNode* dum = new ListNode(0);
        ListNode* last, *tmp;
        if(head == NULL) return head;
        if(head->next == NULL) return head;
        count = 1;
        dum->next = head;
        last = head;
        while(last->next){
            last = last->next;
            count++;
        }
        k =count - k % count;
        for(i = 0; i < k; i++){
            tmp = dum->next;
            dum->next = dum->next->next;
            last->next = tmp;
            tmp->next = NULL;
            last = tmp;
        }
        return dum->next;
    }
};
