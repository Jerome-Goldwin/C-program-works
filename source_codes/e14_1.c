#include<stdio.h>
int main(){
	int arr[3][2] = { {1234, 56}, {7890, 12}, {3456, 78} };
	int i,j;
	for ( i = 0; i <3; i++ ){
		for ( j = 0; j <2; j++ )
			printf("%d ",*( *( arr + i) + j ) );
		printf("\n");
	}
	return 0;
}

