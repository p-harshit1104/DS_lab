#include <stdio.h>
void main(){
    int i,e,ps,n,a[50];
    printf("enter no of elements in an array:\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Given array is:\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf(" ");
    }
    

}