#define MAX 5

#include<iostream>
#include<stdlib.h>
int stack[MAX];
int top = -1;
void push();
void pop();
void display();
void quit();



void push(){
    int num;
    if(top==MAX-1){
        printf("\nStack is full!\n");
    }else{
        printf("\nEnter the element you want to enter in the stack");
        scanf("%d",&num);
        top++;
        stack[top]= num;
    }
}

void pop(){
    if(top==-1){
        printf("\nStack is empty\n");
    }else{
        printf("the deleted element from the stack is",stack[top]);
        top--;
    }
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
 


int main(){
    int ch;
    while(1){
        printf("ALL OPERATIONS\n");
        printf("\n1.PUSH\n2.POP\n3.display\n4.quit");
        scanf("%d",&ch);
    switch(ch){
        case 1:{
            push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
           exit(0);
        default:
            printf("default statement");
        }
    }
    }

    return 0;
}