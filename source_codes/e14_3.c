#include<stdio.h>
int main() {
	int arr[4][2] = {
		{1234, 56}, {7890, 12}, {3456, 78}, {9012, 34}
	};
	int (*p)[2];
	int i, j, *pint;
	for ( i = 0; i < 4; i++ ) {
		p = &arr[i];
		pint = ( int * ) p;
		printf("\n");
		for ( j = 0; j < 2; j++ )
			printf("%d ", *( pint + j ) );
	}
	return 0;
}
