/*LINEAR SEARCH*/
#include<stdio.h>
int linearSearch(int a[],int searchItem,int size);
int main() {
    printf("IMPLEMENTATION OF LINEAR SEARCH IN ARRAYS\n");
    int a[] = {10,9,7,4,3,1,0};
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++) {
        printf("%d ",a[i]);
    }
    int searchItem;
    printf("\nEnter the value that to be searched\n");
    scanf("%d",&searchItem);
    printf("value to be searched :%d\n",searchItem);
    linearSearch(a,searchItem,size);
    return 0;
}
int linearSearch(int a[],int searchItem,int size) {
    int flag = 0;
    for(int j=0;j<size;j++) {
        if (a[j] == searchItem) {
            printf("value is found at %d in the array\n",j);
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("value is not found in the array\n");
    }
    return 0;
}
