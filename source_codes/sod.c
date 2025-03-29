/*Chapter-2: C instructions*/
#include<stdio.h>
int main(){
	int i,a,b[5],k=10,c;
	printf("\nEnter the number: ");
	scanf("%d",&a);
	for(i=4; i>=0; i--){
		b[i]=a-(a/k)*k;
		a=a/k;
	}
	printf("\nThe sum of the digits of the input number is %d",b[4]+b[3]+b[2]+b[1]+b[0]);
	return 0;
}
