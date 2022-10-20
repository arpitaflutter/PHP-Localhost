#include <stdio.h>

void max(int num1,int num2);

int main()
{
    int num1, num2;
    
    printf("Enter two numbers to find maximum: ");
    scanf("%d%d", &num1, &num2);

    max(num1,num2);
}

void max(int num1,int num2){
	
	switch(num1 > num2)
    {   

        case 0: 
            printf("%d is maximum", num2);
            break;

        case 1: 
            printf("%d is maximum", num1);
            break;
    }

    return 0;
}
