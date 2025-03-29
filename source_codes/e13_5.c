#include<stdio.h>
#include<stdlib.h>
int main(){
	int max,i,*p;
	printf("Enter the size of the array: ");
	scanf("%d",&max);
	p = (int * ) malloc ( max * sizeof ( int ) );
	for ( i = 0; i < max; i++){
		printf("\n%d = ",i);
		scanf("%d",&p[i]);
		printf("\n%u = %d ",&p[i],p[i]);
	}
	return 0;
}
