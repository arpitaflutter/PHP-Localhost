#include<stdio.h>

void swap();

int main(){
	
	swap();
}

void swap(){
	
	int a=10,b=20,temp;
	printf("before swapping:- \na=%d \nb=%d",a,b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nafter swapping:- \na=%d\nb=%d",a,b);
	
}

//simple function
