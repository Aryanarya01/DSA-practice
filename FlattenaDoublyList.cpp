#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
     // constructor
    Node(int _val) {
        val = _val;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

class Solution{
    public:
    Node* flatten(Node* head){
        if(head == NULL){
            return head;
        }
        Node* curr = head;
        while(curr != NULL){
            if(curr->child != NULL){
                //flatten child node
                Node* temp = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;
                //find tail
                while(curr->next != NULL){
                    curr = curr->next;
                }
                //attach tail with next ptr
                if(temp != NULL){
                    curr->next = temp;
                    temp->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

// Helper function to print the list
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Level 1: 1 - 2 - 3 - 4 - 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->prev = head->next->next->next;

    // Level 2: 3 has child 7 - 8
    head->next->next->child = new Node(7);
    head->next->next->child->next = new Node(8);
    head->next->next->child->next->prev = head->next->next->child;

    // Flatten the list
    Solution s;
    Node* flattened = s.flatten(head);

    // Print flattened list
    cout << "Flattened List: ";
    printList(flattened);

    return 0;
}