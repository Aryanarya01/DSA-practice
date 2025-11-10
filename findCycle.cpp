//142

#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

  class Solution {
    public:
    ListNode* detectCycle(ListNode* head){
       ListNode* slow = head;
       ListNode* fast = head;
       int isCycle = false;
       while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            isCycle = true;
            break;
        }
         }
        if(!isCycle){
            return NULL;
        }
        slow = head;
        ListNode* prev = NULL;
        while(slow!=fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;

        }
        prev->next = NULL; // Optional: To remove the cycle
        return slow;
    }
  };
  int main(){
    ListNode* head = new ListNode(3);   

    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // Creating a cycle for testing
    Solution obj;
    ListNode* cycleStartNode = obj.detectCycle(head);
    if(cycleStartNode){
        cout<<"Cycle detected at node with value: "<<cycleStartNode->val<<endl;
    } else {
        cout<<"No cycle detected in the linked list."<<endl;
    }


    return 0;
  }