#include<stdio.h>
int main()
{
    int i, j, size = 15;
   
    for (i = size/2; i <= size; i = i+2)
    {
        for (j = 1; j < size-i; j = j+2)        
            printf(" ");
   
        for (j = 1; j <= i; j++)
            printf("*");
    
        for (j = 1; j <= size-i; j++)
            printf(" ");
           
        for (j = 1; j <= i-1; j++)
            printf("*");
   
        printf("\n");
    }
    for (i = size; i >= 0; i--)
    {
        for (j = i; j < size; j++)
            printf(" ");
   
        for (j = 1; j <= ((i * 2) - 1); j++)
            printf("*");
   
        printf("\n");
    }
    return 0;
}

