/*BUBBLE SORT*/
#include<stdio.h>
int a[] = {12,9,4,1,0,9,5,20,90};
int arrSize = sizeof(a)/sizeof(a[0]);
int bubblesort();
int arrDisplay();
int main() {
    printf("IMPLEMENTATION OF BUBBLE SORTING\n");
    printf("ELEMENTS IN THE ARRAY[] BEFORE SORTING = ");
    arrDisplay();
    bubblesort();
    printf("ELEMENTS IN THE ARRAY[] AFTER  SORTING = ");
    arrDisplay();
    printf("BUBBLE SORTING SUCCESSFULLY EXECUTED\n");
    return 0;
}
int bubblesort() {
    for(int i=0;i<arrSize;i++) {
        for(int j=0;j<arrSize-i-1;j++) {
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }
    return 0;
}
int arrDisplay() {
    for(int k=0;k<arrSize;k++) {
        printf("%d ",a[k]);
        }
    printf("\n");
    return 0;
}
