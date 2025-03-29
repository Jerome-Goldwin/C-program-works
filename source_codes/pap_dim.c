/*Chapter-1: Getting started*/
#include<stdio.h>
int main(){
	int l=1189,b=841,s;
	for(int i=0;i<9;i++){
		printf("A(%d) = %dmm x %dmm\n",i,l,b);
		s=l;
		l=b;
		b=s/2;
	}
	return 0;
}
