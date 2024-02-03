/*BINARY SEARCH*/
#include<stdio.h>
int binarySearch(int a[],int start,int end, int searchItem);
int main() {
    printf("IMPLEMENTATION OF BINARY SEARCH\n");
    printf("PRECONDITION IS ARRAY SHOULD BE SORTED\n");
    int a[] = {10,19,29,39,49,59,69,79.89,99,100};
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++) {
        printf("%d ",a[i]);
    }
    int searchItem;
    printf("\nEnter the value to be searched\n");
    scanf("%d",&searchItem);
    printf("The Value to be searched : %d\n",searchItem);
    int start = 0;
    int end = size;
    int mid =(start + end)/2;
    binarySearch(a,start,end,searchItem);
    return 0;
}
int binarySearch(int a[],int start,int end,int searchItem) {
    int mid;
    mid = (start + end)/2;
    printf("%d ",mid);
    if(searchItem == a[mid]) {
        printf("\nvalue is found at %d\n",mid);
        return 0;
    }
    if(searchItem > a[mid]) {
        start = mid;
        return binarySearch(a,start,end,searchItem);
    }
    else{
        end = mid;
        return binarySearch(a,start,end,searchItem);
    }
 return 0;   
}
