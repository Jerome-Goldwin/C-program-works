#include<stdio.h>
int main(){
	int i=3;
	int *j;
	j = &i;
	printf("adress of i = %u\n",&i);
	printf("i = %d\n",i);
	printf("value at the address of i = %d\n",*(&i));
	printf("address of j = %u\n",&j);
	printf("j = %u\n",j);
	printf("value at the address of j = %u\n",*(&j));
	printf("value at the addres j is pointing to = %u\n",*j);
	return 0;
}
