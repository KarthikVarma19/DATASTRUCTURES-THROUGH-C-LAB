/*POSTFIX EVALUATION*/
#include<stdio.h>
#define stackSize 100
int stack[stackSize];
int tos=-1;
int evaluate(char expression[],int charSize);
int push(int num);
int pop();
int main() {
    printf("POSTFIX EVALUATION USING STACKS\n");
    char expression[] = "2 3 + 5 * 1 * 5 %";
    int charSize = sizeof(expression)/sizeof(expression[0]);
    //printf("%d ",charSize);
    for(int i=0;i<charSize;i++) {
    char num = expression[i];
        printf("%c ",num);
    }
    printf("\n");
    evaluate(expression,charSize);
    printf("%d ",stack[tos]);
    return 0;
}
int evaluate(char expression[],int charSize) {
    for(int index =0;index<charSize;index++) {
        char symbol = expression[index];
        if (symbol>='0' && symbol <='9') {
            int num = symbol - '0';
            push(num);
        }
        else {
            int operand2 = 0;
            int operand1 = 0;
            int result = 0;
            switch(symbol) {
                case '+':
                    operand2  = pop();
                    operand1  = pop();
                    result = operand1 + operand2;
                    push(result);
                    break;
                case '-':
                    operand2  = pop();
                    operand1  = pop();
                    result = operand1 - operand2;
                    push(result);
                    break;
                    
                case '/':
                    operand2  = pop();
                    operand1  = pop();
                    result = operand1 / operand2;
                    push(result);
                    break;
                case '*':
                    operand2  = pop();
                    operand1  = pop();
                    result = operand1 * operand2;
                    push(result);
                   break;
                case '%':
                    operand2  = pop();
                    operand1  = pop();
                    result = operand1 % operand2;
                    push(result);
                   break;
                case ' ':
                    break;
            }
        }
    }
    return 0;
}
int push(int num) {
    if(tos==-1 || tos <= stackSize) {
        tos++;
        stack[tos] =num;
    }
    return 0;
}
int pop() {
    if(tos==-1) {
        return 0;
        
    }
    else {
        int value = stack[tos];
        tos--;
        return value;
    }
}
