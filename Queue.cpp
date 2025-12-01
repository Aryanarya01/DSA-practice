//                              queue from scratch

// #include <iostream>
// #include <vector>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class Queue
// {
//     Node *head;
//     Node *tail;

// public:
//     Queue()
//     {
//         head = tail = NULL;
//     }

//     void push(int data)
//     { // insert data at tail  O(1)
//         Node *newNode = new Node(data);
//         if (empty())
//         {
//             head = tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
//     void pop()
//     { // O(1)
//         if (empty())
//         {
//             cout << "LL is empty";
//             return;
//         }
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//     }
//     int front()
//     { // O(1)
//         if (empty())
//         {
//             cout << "LL is empty";
//             return -1;
//         }
//         return head->data;
//     }
//     bool empty()
//     { // O(1)
//         return head == NULL;
//     }
// };
// int main()
// {

//     Queue q;
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);

//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;

//     return 0;
// }


//                                  using STL

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     queue<int> q;
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);

//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;

//     return 0;
// }

  

//                                deque

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(5);
    cout<<dq.front()<<" "<<dq.back();

    return 0;
}