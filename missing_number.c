#include <stdio.h>  
  
  
int main ()  
{  
    
    int arr[50],sum=0,missing=0;  
    int pos, i, num; 
    printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &num);  
      
    printf (" \n Enter %d elements in array: \n ", num);  
    for (i = 0; i < num-1; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }  
    printf("sum of array is:\n");
    for(i=0;i<num-1;i++){
        sum+=arr[i];


    }
    printf("%d",sum);
    printf("\n");
    int total;
    total=((num*(num+1))/2);
    missing=total-sum;
    printf("your missing number is:-%d",missing);
}