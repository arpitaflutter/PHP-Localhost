#include<stdio.h>

int swap();

int main(){
	
	int a,b,temp;
	
	swap(a,b);
	
	return 0;
}

int swap(){
	
	int temp,a=10,b=20;
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nafter swapping:- \na=%d\nb=%d",a,b);
	
}

//return with no parameter
