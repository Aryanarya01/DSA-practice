//    21. Merge Two Sorted Lists

#include<iostream>
using namespace std;

struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
   };

   class Solution {
    public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2){
        if(head1 == NULL || head2 == NULL){//jo bhi list null ko point karegi uske dusriwali list ko return kar do
            return head1 == NULL ? head2 : head1;
        }
        //case1:
        if(head1->val < head2->val){
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        }else{//case2:
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }
   };
int main(){
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);      
    head1->next->next = new ListNode(4);
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);
    Solution obj;
    ListNode* mergedHead = obj.mergeTwoLists(head1, head2);

    cout<<"Merged Sorted List: ";
    while(mergedHead != NULL){
        cout<<mergedHead->val<<" ";
        mergedHead = mergedHead->next;
    }
    

    return 0;
}