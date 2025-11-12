#include<iostream>
using namespace std;;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class circularLinkedList{
    Node* head;
    Node* tail;
    public:
    circularLinkedList(){
        head = tail = NULL;
    }
    public:

    //insert at head
    void insert_head(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    //print cll
    void print_cll(){
        if(head == NULL){
            return;
        }
        cout<<head->data<<"->";
        Node* temp = head->next;
        while(temp != head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
         cout<<temp->data<<endl;
    }

    //insert at tail
    void insert_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    //delete at head
    void delete_head(){
        if(head == NULL){
            cout<<"the list is empty\n";
            return;
        }
        if(head == tail){//single node
            delete head;
            head = tail = NULL;
        }
        //2 or more node
        Node* temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }

    //delete at tail
    void delete_tail(){
        if(head == NULL){
            cout<<"list is empty\n";
            return;
        }else if(head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
};
int main(){
 circularLinkedList cll;
 cll.insert_head(1);
 cll.insert_head(9);
 cll.insert_back(10);
 cll.insert_back(90);
 //cll.delete_head();
cll.delete_tail();
 cll.print_cll();
    return 0;
}