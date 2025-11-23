#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int val){
    data = val;
    next = NULL;
}
};

class Stack{
    Node* head;
    public:
    Stack(){
        head = NULL;
    }

    //push elements in the stack
     void push(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
     }

     //pop elements from the stack
     void pop(){
        if(head == NULL){
            cout<<"stack is empty";
            return;
        }
        Node* temp =head;
        head = head->next;
        delete temp;
     }

     //print the top element from the stack
     int top(){
        if(head == NULL){
            cout<<"stack is empty";
            return -1;
        }
        return head->data;
     }

     //check if stack is empty
     bool isEmpty(){
        return head == NULL;
     }

     //print a stack
     void print(){
        if(head == NULL){
            cout<<"stack is empty";
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
     }
};

int main(){
    Stack s;
    s.push(9);
    s.push(3);
    s.push(4);
    s.print();
        cout << "Top: " << s.top() << endl; // 30

    s.pop();

    cout << "Top after pop: " << s.top() << endl; // 20
    return 0;
}