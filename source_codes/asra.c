#include<stdio.h>
int asra(int,int);
int main(){
	int w=0,h=0,g;
	printf("Enter the width and height: ");
	scanf("%d %d",&w,&h);
	g=asra(w,h);
	w = w / g;
	h = h / g;
	printf("\nThe aspect ratio of this resolution is %d:%d\n",w,h);
	return 0;
}

int asra(int w, int h){
	int t;
	while (h != 0) {
	    t = h;
	    h = w % h;
	    w = t;
	}
	return w;
}
