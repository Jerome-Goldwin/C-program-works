#include<stdio.h>
int main(){
	int i=3;
	int *j,**k;
	j=&i;
	k=&j;
	printf("i = %d\n",i);
	printf("addres of i = %u\n",&i);
	printf("j = %u\n",j);
	printf("address of j = %u\n",&j);
	printf("value at the address j is pointing to = %i\n",*j);
	printf("k = %u\n",k);
	printf("address of k = %u\n",&k);
	printf("value at the address k is pointing to = %u\n",*k);
	printf("value at the address at the value of the address k is pointing to = %d\n",**k);
	return 0;
}
