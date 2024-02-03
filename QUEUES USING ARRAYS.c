/*IMPLENTATION OF QUEUES(FIFO) USING ARRAYS*/
#include<stdio.h>
#define size 5 //macro definition its type is "object like macro"
int queue[size]; 
int front = -1;
int rear = -1;
void enqueue();
void dequeue(); 
void peek();
void display();
int main() {
    int option;
    printf("IMPLENTATION OF QUEUES(FIFO) USING ARRAYS\n");
    do{
    printf("Enter the option\n");
    printf("0.STOP\n1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY\n");
    scanf("%d",&option);
    switch(option) {
        case 0:
            printf("EXECUTION STOPPED\n");
            break;
        case 1:
            printf("You Opted ENQUEUE operation\n");
            enqueue();
            break;
        case 2:
            printf("You Opted DEQUEUE operation\n");
            dequeue();
            break;
        case 3:
            printf("You Opted Peek operation\n");
            peek();
            break;
        case 4:
            printf("You Opted Display operation\n");
            display();
            break;
        default: 
            printf("Enter the option in range(0-4)\n");
    }
    }while(option!=0); // runs until option is 0 ie stop
    return 0;
}
void enqueue() { //value is inserted from rear end that is enqueue
    int item;
    printf("Enter the enqueue value\n");
    scanf("%d",&item);
    if(rear == size-1) {
        printf("Overflow\n");
        return;
    }
    if(rear==-1 && front ==-1) {
        rear++;
        front++;
    }
    else {
        rear++;
    }
    queue[rear] = item;
    printf("value inserted\n");
}
void dequeue() { //value is deleted from front end that is dequeue
    if(front == -1 || front>rear) {
        printf("Underflow\n");
        return;
    }
    else if(front == rear) {
        printf("The dequeued value is %d\n",queue[front]);
        front = rear = -1;
    }
    else {
        printf("The dequeued value is %d\n",queue[front]);
        front++;
    }
}
void peek() { // shows the top most element in the queue that is front value
    if(front == -1 && rear == -1) {
        printf("Underflow\n");
    }
    else {
        printf("%d\n",queue[front]);
    }
}
void display() { //shows all the elements in the queue
    if(front == -1 && rear ==-1) {
    printf("Underflow\n");
    }
    else {
        for(int pointer=front;pointer<rear+1;pointer++) {
            printf("%d ",queue[pointer]);
        }
    }
}
