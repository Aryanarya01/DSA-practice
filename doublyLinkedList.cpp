#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    //constructor
    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
    Node* head;
    Node* tail;

    public:
    //constructor
    DoublyList(){
        head = tail = NULL;
    }

    //push front 
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    //print ll
    void print(){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<"<=>";
        temp = temp->next;
    }
    cout<<"NULL\n"; 
    }

    //push back
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = NULL;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    //pop front
    void pop_front(){
        if(head == NULL){
            cout<<"DoublyList is empty \n";
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    //pop_back
    void pop_back(){
        if(head == NULL){
            cout<<"doublyLinkedList id empty\n";
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail!=NULL){
            tail->next = NULL;
        }
            temp->prev = NULL;
            delete temp;
    }
};

int main(){
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(9);
    //dll.pop_front();
    dll.pop_back();
    dll.print();

    return 0;
}