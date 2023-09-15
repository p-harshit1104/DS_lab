#include <stdio.h>  
#include <conio.h>  
  
int main ()  
{  
    
    int arr[50];  
    int pos, i,j, num; 
    printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &num);  
      
    printf (" \n Enter %d elements in array: \n ", num);  
    for (i = 0; i < num; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }  
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[j]);
                printf("\n");
            }
        }

    }
}