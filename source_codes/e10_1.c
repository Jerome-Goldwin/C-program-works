#include<stdio.h>
int fact(int);
int main(){
	int i,f;
	printf("Enter the factorial number: ");
	scanf("%d",&i);
	f=fact(i);
	printf("The factorial of %d is %d",i,f);
	return 0;
}

int fact(int i){
	int f;
	if(i==1)
		return (1);
	else
		f=i*fact(i-1);
	return (f);
}
