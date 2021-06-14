#include<iostream>
using namespace std;

class MyLinkedList {
public:
  struct ListNode {
    ListNode *next;
    int val;
    ListNode(int a) : next(nullptr), val(a) {}
  };
  /** Initialize your data structure here. */
  ListNode *head;
  MyLinkedList() { head = nullptr; }

  /** Get the value of the index-th node in the linked list. If the index is
   * invalid, return -1. */
  int get(int index) {
    if (index < 0) {
      return -1;
    }
    ListNode *curr = head;
    while (index-- && curr != nullptr) {
      curr = curr->next;
    }
    if (curr != nullptr) {
      return curr->val;
    } else {
      return -1;
    }
  }

  /** Add a node of value val before the first element of the linked list. After
   * the insertion, the new node will be the first node of the linked list. */
  void addAtHead(int val) {
    ListNode *node = new ListNode(val);
    node->next = head;
    head = node;
  }

  /** Append a node of value val to the last element of the linked list. */
  void addAtTail(int val) {
    if (head == nullptr) {
      addAtHead(val);
      return;
    }
    ListNode *curr = head;
    while (curr->next != nullptr) {
      curr = curr->next;
    }
    curr->next = new ListNode(val);
  }

  /** Add a node of value val before the index-th node in the linked list. If
   * index equals to the length of linked list, the node will be appended to the
   * end of linked list. If index is greater than the length, the node will not
   * be inserted. */
  void addAtIndex(int index, int val) {
    if (index <= 0) {
      addAtHead(val);
      return;
    }
    ListNode *curr = head;
    while (--index) {
      curr = curr->next;
    }
    ListNode *node = new ListNode(val);
    node->next = curr->next;
    curr->next = node;
  }

  /** Delete the index-th node in the linked list, if the index is valid. */
  void deleteAtIndex(int index) {
    if (index == 0) {
      ListNode *temp = head->next;
      delete head;
      head = temp;
      return;
    }
    ListNode *curr = head;

    while (--index) {
      curr = curr->next;
    }
    if (curr->next == nullptr) {
      return;
    }
    ListNode *temp = curr->next->next;
    delete curr->next;
    curr->next = temp;
  }

  void printLL(){
      ListNode *curr = head;
      while(curr!=NULL){
          cout<<curr->val<<" -> ";
          curr=curr->next;
      }
  }
};

int main() {
//Your MyLinkedList object will be instantiated and called as such:
MyLinkedList* obj = new MyLinkedList();
int param_1 = obj->get(2);
obj->addAtHead(1);
obj->addAtTail(2);
obj->addAtIndex(2,3);
obj->addAtIndex(3,4);
obj->addAtIndex(4,5);
obj->addAtTail(8);
//obj->deleteAtIndex(2);
obj->printLL();
return 0;
}