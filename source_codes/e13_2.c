#include<stdio.h>
int main(){
	int arr[]={10, 20, 30, 45, 67, 56, 74};
	int i=4, *j, *k, *x, *y;
	j = &i;
	printf("j=%u\n",j);
	j = j + 9;
	printf("j=%u\n",j);
	k = &i;
	printf("k=%u\n",k);
	k = k - 3;
	printf("k=%u\n",k);
	x = &arr[1];
	printf("x=%u\n",x);
	y = &arr[5];
	printf("y=%u\n",y);
	printf("%d\n", y - x);
	j = &arr[4];
	printf("j=%u\n",j);
	k = (arr + 4);
	printf("k=%u\n",k);
	if(j == k)
		printf("The two pointers point to the same location\n");
	else
		printf("The two pointer point to different locations\n");
	return 0;
}
