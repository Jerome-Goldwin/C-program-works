/*Chapter-3: Decision control instruction*/
#include<stdio.h>
int rev(int);
int main(){
	int a,d;
	printf("Emter the five digit number: ");
	scanf("%d",&a);
	d=rev(a);
	printf("Number: %d\n",a);
	printf("Reversed: %d\n",d);
	if (a==d)
		printf("Equel: Yes\n");
	else
		printf("Equel: No\n");
	return 0;
}

int rev(int n){
	int b=0,c=0,d=0,e=0,i,k=10,k1=10000;
	e=n;
	for(i=0; i<5; i++){
		b=e-(e/k)*k;
		e=e/k; c=b*k1; d+=c; k1=k1/10;
		//printf("\n%d\t%d",b,d);
	}
	return d;
}

