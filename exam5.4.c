#include<stdio.h>  
  
void swap(int a, int b);  
  
int main()  
{  
    int a=10,b=20;  
  
    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(a, b);  
  
    return 0;  
}  
  
void swap(int a, int b)  
{  
    int temp;  
  
    temp = a;  
    a    = b;  
    b    = temp;  
  
    printf("\nAfter swapping: a = %d and b = %d\n", a, b);  
}  

//return with parameter
