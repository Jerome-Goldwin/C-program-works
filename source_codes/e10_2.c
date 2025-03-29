#include<stdio.h>
int sum(int);
int main(){
	int i,s;
	printf( "i=" );
	scanf( "%d", &i );
	s=sum(i);
	printf( "\nThe sum of the digits is %d", s );
	return 0;
}

int sum(int i){
	int s,remainder;
	if(i!=0){
		remainder = i % 10;
		s = remainder + sum( i / 10 );
	}
	else
		return 0;
	return s;
}
