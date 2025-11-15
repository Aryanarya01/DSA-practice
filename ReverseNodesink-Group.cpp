//Reverse Nodes in k-Group


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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;
        //check if k nodes exists
        while(count < k){
            if(temp == NULL){
                return head;
            }
            temp = temp->next;
            count++;
        }
        //recursively check rest of the linkedlist
        ListNode* prevNode = reverseKGroup(temp,k);
        // reverse the current group
        temp = head;
        count = 0;
        while(count<k){
            ListNode* next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            count++;
        }
        return prevNode;
    }
 };
 
// helper to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // manually creating list: 1 -> 2 -> 3 -> 4 -> 5 -> 6
    ListNode* head = new ListNode(1,
                      new ListNode(2,
                      new ListNode(3,
                      new ListNode(4,
                      new ListNode(5,
                      new ListNode(6))))));

    int k = 2; // group size

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.reverseKGroup(head, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(head);

    return 0;
}