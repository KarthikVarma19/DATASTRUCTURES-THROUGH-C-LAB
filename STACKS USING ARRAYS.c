/* IMPLEMENTATION OF STACKS USING ARRAYS*/
#include<stdio.h>
#define size 5
void push();
void pop();
void peek();
void display();
int stack[size];
int pos = -1; //pointer of stack
int main() {
    int option = 0;
    printf("IMPLEMENTATION OF STACKS USING ARRAYS\n");
    do {
    printf("Enter the option\n");
    printf("0.STOP\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n");
    scanf("%d",&option);
    
    switch(option) {
        case 0:
            printf("Execution Stopped\n");
            break;
        case 1:
            printf("You Opted Push Operation\n");
            push();
            break;
        case 2:
            printf("You Opted Pop Operation\n");
            pop();
            break;
        case 3:
            printf("You Opted Peek Operation\n");
            peek();
            break;
        case 4:
            printf("You Opted Display Operation\n");
            display();
            break;
        default:
            printf("Enter the option in range 0 - 4\n");
    }
    }while(option!=0);
    return 0;
}
void push() {
    int value;
    printf("Enter the value\n");
    scanf("%d",&value);
    if(pos!=size-1) {
        pos++;
        stack[pos] = value;
    }
    else{
        printf("Overflow\n");
    }
    
}
void pop() {
    int popvalue = stack[pos];
    if(pos==-1) {
        printf("Underflow\n");
    }
    else {
        printf("Poped value is %d\n",popvalue);
        pos--;
    }
}
void peek() { //gets the  top most value of stack 
    int peekvalue = stack[pos];
    if(pos==-1) {
        printf("Underflow\n");
    }
    else {
        printf("peek value is %d\n",peekvalue);
    }
    
}
void display() { //gets the all of the values in the stack
    int pointer;
    if(pos==-1) {
        printf("Underflow\n");
    }
    else if(pos>size-1) {
        printf("Overflow\n");
    }
    else {
        for(pointer=pos;pointer>=0;pointer--) {
            printf("%d ",stack[pointer]);
            printf("\n");
        }
    }
}
