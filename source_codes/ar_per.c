/*Chapter-1: Getting started*/
#include<stdio.h>
int main(){
	float pi=3.14;
	float l,b,r,aor,por,aoc,coc;
	printf("Enter the length and breath of the rectangle: ");
	scanf("%f %f",&l,&b);
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);
	aor=l*b;
	por=2*(l*b);
	aoc=pi*r*r;
	coc=2*pi*r;
	printf("The area and perimeter of the rectangle is %.2f,%.2f\n",aor,por);
	printf("The area and circumference of the circle is %.2f,%.2f",aoc,coc);
	return 0;
}
