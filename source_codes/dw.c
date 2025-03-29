#include<stdio.h>
void clearbuffer(){
	int ch;
	while((ch=getchar()) !='\n' && ch != EOF){}
}
int main(){
	int n;
	char c;
	do{
		printf("\nEnter the number: ");
		scanf("%d",&n);
		printf("\nThe square of the number %d is %d",n,n*n);
		printf("\n\nAgain? Y/N: ");
		clearbuffer();
		scanf("%c",&c);
	}while(c=='y'||c=='Y');
	return 0;
}
