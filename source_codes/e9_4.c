#include<stdio.h>
void swap(int * ,int *);
int main(){
	printf("Number swapping using pointers\n");
	int a=10,b=30;
	printf("Before swap: a=%d, b=%d\n",a,b);
	swap(&a,&b);
	printf("After swap: a=%d, b=%d\n",a,b);
	return 0;
}

void swap(int *a, int *b){
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
