#include<stdio.h>
#define ISUPPER(x) ( x >= 65 && x <= 90 ? 1 : 0 )
#define ISLOWER(x) ( x >= 97 && x <= 122 ? 1 : 0 )
#define ISALPHA(x) ( ISUPPER(x) || ISLOWER(x) )
#define BIG(x,y) ( x > y ? 1 : 0 )
int main(){
	char ch;
	int d,a,b;
	printf("Enter any alphabet/number: ");
	scanf("%c",&ch);
	if (ISUPPER(ch) == 1)
		printf("Upper\n");
	if (ISLOWER(ch) == 1)
		printf("Lower\n");
	if (ISALPHA(ch) == 1 )
		printf("An alphabet\n");
	printf("Enter any two numbers: ");
	scanf("%d %d",&a,&b);
	if (BIG(a,b) == 1)
		printf("%d is bigger than %d",a,b);
	else
		printf("%d is bigger than %d",b,a);
	return 0;
}
