#include<iostream>
#include<queue>
using namespace std;

class Stack{
public:
queue<int> q1;
queue<int> q2;

void push(int x){
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
}

int pop(){
    int ans = q1.front();
    q1.pop();
    return ans;
}

int top(){
    return q1.front();
}

bool empty(){
    return q1.empty();  
}

};
int main(){

  Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;     // 30
    cout << "Pop: " << s.pop() << endl;     // 30
    cout << "Top after pop: " << s.top() << endl;  // 20

     
    return 0;
}