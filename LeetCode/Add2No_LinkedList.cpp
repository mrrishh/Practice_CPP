#include<iostream>

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
  
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = l1, *q=l2;
        ListNode *ans = new ListNode(0);
        ListNode *curr = ans;
        int carry = 0;
        
        while(p!=NULL || q!=NULL){
            int x = (p!=NULL)? p->val: 0;
            int y   = (q!=NULL)? q->val: 0;
            
            int sum = carry+x+y;
            carry = sum/10;
            
            curr->next = new ListNode(sum%10);
            curr= curr->next;
            
            if(p!=NULL) p=p->next;
            if(q!=NULL) q=q->next;
            
        }
        if(carry>0)
            curr->next = new ListNode(carry);
        std::cout<<"Returning ans-> next";
        return ans->next;
    }

void printLinkedList(ListNode *root){
    std::cout<<"In print fun";
	while(root){
		std::cout<< "\nData:" <<root->val;
		root = root->next;
		
	}
}

int main (){
    ListNode* l1;
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    l1->next->next->next = new ListNode(3);
    ListNode* l2;
    l2->next = new ListNode(5);
    l2->next->next = new ListNode(6);
    l2->next->next->next = new ListNode(4);
    ListNode *answer =  addTwoNumbers(l1, l2);
    printLinkedList(l2->next);
}