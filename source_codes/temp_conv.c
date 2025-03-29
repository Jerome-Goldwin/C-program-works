/*Chapter-1: Getting started*/
#include<stdio.h>
int main(){
	float fah,cent;
	printf("Enter the fahrenheit of the city: ");
	scanf("%f",&fah);
	cent = (fah-32)/1.8;
	printf("The centigrade of this city is %.4f",cent);
	return 0;
}
