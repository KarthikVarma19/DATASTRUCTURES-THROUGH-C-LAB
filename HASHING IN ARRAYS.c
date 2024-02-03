/*HASHING*/
#include<stdio.h>
#define tableSize 7
int hash();
int insert(int value);
int delete(int value);
int show();
int search(int value);
int a[]={};
int main() {
    printf("IMPLEMENTATION OF HASHING THROUGH ARRAYS\n");
    hash();
    insert(10);
    insert(4);
    insert(2);
    insert(3);
    show();
    search(10);
    search(3);
    delete(10);
    show();
    return 0;
}
int hash() {
    for(int i = 0;i<tableSize;i++) {
        a[i] = -1;
    }
    return 0;
}
int show() {
    for(int i =0;i<tableSize;i++) {
        printf("a[%d] = %d \n",i,a[i]);
    }
    return 0;
}
int insert(int value) {
    if(a[value%tableSize] == -1) {
        a[value%tableSize] = value;
    }
    else {
        printf("Collosion occured at %d\n",value%tableSize);
    }
    return 0;
}
int search(int value) {
    int key = value%tableSize;
    if(a[key] == value) {
        printf("value(%d) found at %d\n",value,key);
    }
    else {
        printf("value(%d) not found\n",value);
    }
    return 0;
}
int delete(int value) {
    int key = value % tableSize;
    if(a[key] = value) {
        a[key] = -1;
        printf("value(%d) is deleted at %d\n",value,key);
    }
    else {
        printf("value(%d) not found at %d deletion unable\n",value,key);
    }
    return 0;
}
