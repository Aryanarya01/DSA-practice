#include<iostream>
#include<stack>
using namespace std;

class Queue{
    public:
    stack<int> s1;
    stack<int> s2;


    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop(){
        int ans = s1.top();
        s1.pop();
        return ans;
    }

    int peek(){
        return s1.top();
    }

    int empty(){
        return s1.empty();
    }
};

int main(){

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);


     cout << "front: " << q.peek() << endl;     // 30
    cout << "Pop: " << q.pop() << endl;     // 30
    cout << "front after pop: " << q.peek() << endl;  // 20

    return 0;
}