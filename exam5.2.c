#include<stdio.h>

void swap(int a,int b);

int main(){
	
	int a=10,b=20;
	swap(a,b);
}

void swap(int a,int b){
	
	int temp;
	
	printf("before swapping:- \na=%d \nb=%d",a,b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nafter swapping:- \na=%d\nb=%d",a,b);
}

//no return with parameter
