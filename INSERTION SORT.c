/* INSERTION SORT*/
#include<stdio.h>
int a[] = {12,19,1,4,9,0,8,99,7};
int arrSize = sizeof(a)/sizeof(a[0]);
int insertionSort(); 
int arrDisplay();
int main() {
    printf("IMPLEMENTAION OF INSERTION SORT OF UNSORTED ARRAY\n");
    printf("ELEMENTS BEFORE SORTING : ");
    arrDisplay();
    insertionSort();
    printf("ELEMENTS AFTER SORTING : ");
    arrDisplay();
    printf("INSERTION SORT COMPLETED SUCCESSFULLY\n");
    return 0;
}
int insertionSort() {
    for(int index=0;index<arrSize;index++){
        int insert = index;
        while(insert>0 && (a[insert-1] > a[insert])) {
            int temp = a[insert-1];
            a[insert-1] = a[insert];
            a[insert] = temp;
            insert--;
        }
    }
    return 0;
}
int arrDisplay() {
    for(int index=0;index<arrSize;index++) {
        printf("%d ",a[index]);
            }
    printf("\n");
    return 0;
}
