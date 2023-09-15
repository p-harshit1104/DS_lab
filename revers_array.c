#include <stdio.h>
void main(){
    int i,e,ps,n,a[50],j,b[50];
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
    printf("\n");
    j=0;
    printf("reversal of array is:\n");
    for(i=n-1;i>=0;i--){
        b[j]=a[i];
        j++;
        
    }
    printf("Given array is:\n");
    for(i=0;i<n;i++){
        printf("%d",b[i]);
        printf(" ");
    }

    
}   