#include<iostream>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  class Solution{
    public:
    ListNode* swapPairs(ListNode* head){
        if( head == NULL || head->next == NULL){
            return head;
        }
        ListNode* first = head;
        ListNode* sec = head->next;
        ListNode* prev = NULL;

        while(first!=NULL && sec != NULL){
            ListNode* third = sec->next;
            sec->next = first;
            first->next = third;
            if(prev != NULL){
                prev->next = sec;
            }else{
                head = sec;
            }

            prev = first;
            first = third;
            if(third != NULL){

                sec = third->next;
            }else{
                sec = NULL;
            }
        }
        return head;

    }
  };
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));

    Solution s;
    head = s.swapPairs(head);
    printList(head); // Output: 2 1 4 3

    return 0;
}