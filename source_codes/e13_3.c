#include<stdio.h>
void fun1(int *,int );
void fun2(int [], int);
int main(){
	int arr[]={24,34,12,44,56,17};
	fun1(&arr[0],6);
	fun2(&arr[0],6);
	return 0;
}

void fun1(int *j, int num){
	int i;
	for(i=0; i<num; i++){
		printf("fun1.element = %d\n",*j);
		j++;
	}
}

void fun2(int j[], int num){
	int i;
	for(i=0; i<num; i++)
		printf("fun2.element = %d\n",j[i]);
}
