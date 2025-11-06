#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){ //constructor
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
    public:
    List(){//constructor
        head = tail = NULL;
    }

    //    push front
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    // push back

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
// pop front

    void pop_front(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }

    //  void pop back

void pop_back(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    //break connections
    temp->next = NULL;
    delete tail;
    tail = temp;
}

    // insert in middle
    void insert(int val,int pos){
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Position out of bounds"<<endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;//make connection
        temp->next = newNode;//make connection 
    }

   

    // print linked list
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

      int search(int key){
        Node* temp = head;
        int pos = 0;
        while(temp !=NULL){
            if(temp->data == key){
                cout<<"Element found at position "<<pos<<endl;
                return pos;
            }
             temp = temp->next;
             pos++;
        }
       return -1;
    }
};

 

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.insert(4,3);

    ll.printLL();

    ll.search(1);
    return 0;
}