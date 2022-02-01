class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        if(list1->val <= list2->val)
        {
           list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        
        list2->next =mergeTwoLists(list1,list2->next);
       return list2; 
    }
};

****************MORE EFFICIENT *******************************
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode *head = NULL, *curr = NULL;
        while(list1!=NULL && list2!=NULL){
            if(list1->val < list2->val){
                if(head == NULL){
                    head = list1;
                    curr = list1;
                }
                else {
                    curr->next = list1;
                    curr = curr->next;
                }
                list1 = list1->next;
            }
            else{
                if(head == NULL){
                    head = list2;
                    curr = list2;
                }
                else {
                    curr->next = list2;
                    curr = curr->next;
                }
                list2 = list2->next;
            }
        }
        while(list1!=NULL){
            if(head == NULL){
                head = list1;
                curr = list1;
            }
            else {
                curr->next = list1;
                curr = curr->next;
            }
            list1 = list1->next;
        }
        while(list2!=NULL){
            if(head == NULL){
                head = list2;
                curr = list2;
            }
            else {
                curr->next = list2;
                curr = curr->next;
            }
            list2 = list2->next;
        }
        return head;
    }
};
